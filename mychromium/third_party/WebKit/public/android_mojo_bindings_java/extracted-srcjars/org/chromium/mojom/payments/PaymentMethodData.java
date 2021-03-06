
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/WebKit/public/platform/modules/payments/payment_request.mojom
//

package org.chromium.mojom.payments;

import org.chromium.base.annotations.SuppressFBWarnings;
import org.chromium.mojo.bindings.DeserializationException;


public final class PaymentMethodData extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 24;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(24, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];





    public String[] supportedMethods;

    public String stringifiedData;



    private PaymentMethodData(int version) {
        super(STRUCT_SIZE, version);





    }

    public PaymentMethodData() {
        this(0);
    }

    public static PaymentMethodData deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    @SuppressWarnings("unchecked")
    public static PaymentMethodData decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
        PaymentMethodData result = new PaymentMethodData(mainDataHeader.elementsOrVersion);


        if (mainDataHeader.elementsOrVersion >= 0) {
            
            
            org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(8, false);
            
            
            {
            
            
                org.chromium.mojo.bindings.DataHeader si1 = decoder1.readDataHeaderForPointerArray(org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
                result.supportedMethods = new String[si1.elementsOrVersion];
                for (int i1 = 0; i1 < si1.elementsOrVersion; ++i1) {
                    
                    
                    result.supportedMethods[i1] = decoder1.readString(org.chromium.mojo.bindings.DataHeader.HEADER_SIZE + org.chromium.mojo.bindings.BindingsHelper.POINTER_SIZE * i1, false);
                    
                    
                }
            
            }
            
            
        }

















        if (mainDataHeader.elementsOrVersion >= 0) {
            
            
            result.stringifiedData = decoder0.readString(16, false);
            
            
        }
















        return result;
    }

    @SuppressWarnings("unchecked")
    @Override
    protected final void encode(org.chromium.mojo.bindings.Encoder encoder) {

        org.chromium.mojo.bindings.Encoder encoder0 = encoder.getEncoderAtDataOffset(DEFAULT_STRUCT_INFO);



        
        
        
        
        if (supportedMethods == null) {
            encoder0.encodeNullPointer(8, false);
        } else {
        
        
        
        
            org.chromium.mojo.bindings.Encoder encoder1 = encoder0.encodePointerArray(supportedMethods.length, 8, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
            for (int i0 = 0; i0 < supportedMethods.length; ++i0) {
                
                
                encoder1.encode(supportedMethods[i0], org.chromium.mojo.bindings.DataHeader.HEADER_SIZE + org.chromium.mojo.bindings.BindingsHelper.POINTER_SIZE * i0, false);
                
            }
        }
        

















        
        
        encoder0.encode(stringifiedData, 16, false);
        
















    }

    /**
     * @see Object#equals(Object)
     */
    @Override
    public boolean equals(Object object) {
        if (object == this)
            return true;
        if (object == null)
            return false;
        if (getClass() != object.getClass())
            return false;

        PaymentMethodData other = (PaymentMethodData) object;

        if (!java.util.Arrays.deepEquals(this.supportedMethods, other.supportedMethods))
            return false;

        if (!org.chromium.mojo.bindings.BindingsHelper.equals(this.stringifiedData, other.stringifiedData))
            return false;


        return true;
    }

    /**
     * @see Object#hashCode()
     */
    @Override
    public int hashCode() {
        final int prime = 31;
        int result = prime + getClass().hashCode();

        result = prime * result + java.util.Arrays.deepHashCode(supportedMethods);

        result = prime * result + org.chromium.mojo.bindings.BindingsHelper.hashCode(stringifiedData);

        return result;
    }
}
