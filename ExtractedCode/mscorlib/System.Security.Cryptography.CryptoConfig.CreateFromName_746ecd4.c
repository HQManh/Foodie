// rea decompile_all
// name: System.Security.Cryptography.CryptoConfig$$CreateFromName
// address: 0x746ecd4
// body: available
// range: 0x746ecd4-0x7470a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7470a40 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7470a44 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7470a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07470a44) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
System_Security_Cryptography_CryptoConfig__CreateFromName(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  char local_44 [4];
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_095211f6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6b88);
    FUN_03f5c2a4(&DAT_09182f88);
    FUN_03f5c2a4(&DAT_09183180);
    FUN_03f5c2a4(&DAT_091831d8);
    FUN_03f5c2a4(&DAT_091831e8);
    FUN_03f5c2a4(&DAT_091831f0);
    FUN_03f5c2a4(&DAT_091831f8);
    FUN_03f5c2a4(&DAT_091a0070);
    FUN_03f5c2a4(&DAT_09184f70);
    FUN_03f5c2a4(&DAT_09184f78);
    FUN_03f5c2a4(&DAT_09184f80);
    FUN_03f5c2a4(&DAT_09184f88);
    FUN_03f5c2a4(&DAT_09184f90);
    FUN_03f5c2a4(&DAT_09184f98);
    FUN_03f5c2a4(&DAT_09187cf8);
    FUN_03f5c2a4(&DAT_09187d28);
    FUN_03f5c2a4(&DAT_091899a8);
    FUN_03f5c2a4(&DAT_091899d8);
    FUN_03f5c2a4(&DAT_091899e0);
    FUN_03f5c2a4(&DAT_091899f0);
    FUN_03f5c2a4(&DAT_09189a10);
    FUN_03f5c2a4(&DAT_09189a18);
    FUN_03f5c2a4(&DAT_09189a20);
    FUN_03f5c2a4(&DAT_09189a28);
    FUN_03f5c2a4(&DAT_09189a30);
    FUN_03f5c2a4(&DAT_09189a38);
    FUN_03f5c2a4(&DAT_0918a308);
    FUN_03f5c2a4(&DAT_0918a478);
    FUN_03f5c2a4(&DAT_0918a488);
    FUN_03f5c2a4(&DAT_0918a490);
    FUN_03f5c2a4(&DAT_0918a498);
    FUN_03f5c2a4(&DAT_0918a4a0);
    FUN_03f5c2a4(&DAT_0918c0e0);
    FUN_03f5c2a4(&DAT_091dc128);
    FUN_03f5c2a4(&DAT_09224428);
    FUN_03f5c2a4(&DAT_092239a0);
    FUN_03f5c2a4(&DAT_09223a90);
    FUN_03f5c2a4(&DAT_09221d88);
    FUN_03f5c2a4(&DAT_09223a00);
    FUN_03f5c2a4(&DAT_0921cc78);
    FUN_03f5c2a4(&DAT_09223a10);
    FUN_03f5c2a4(&DAT_092239f8);
    FUN_03f5c2a4(&DAT_0921a528);
    FUN_03f5c2a4(&DAT_0920e208);
    FUN_03f5c2a4(&DAT_0921ce88);
    FUN_03f5c2a4(&DAT_09223950);
    FUN_03f5c2a4(&DAT_09221cc0);
    FUN_03f5c2a4(&DAT_09223978);
    FUN_03f5c2a4(&DAT_092239f0);
    FUN_03f5c2a4(&DAT_0920e200);
    FUN_03f5c2a4(&DAT_09223a78);
    FUN_03f5c2a4(&DAT_0921cef0);
    FUN_03f5c2a4(&DAT_09224410);
    FUN_03f5c2a4(&DAT_09222938);
    FUN_03f5c2a4(&DAT_09223aa8);
    FUN_03f5c2a4(&DAT_0921cc58);
    FUN_03f5c2a4(&DAT_0920e198);
    FUN_03f5c2a4(&DAT_0921ced0);
    FUN_03f5c2a4(&DAT_09223a50);
    FUN_03f5c2a4(&DAT_092239c0);
    FUN_03f5c2a4(&DAT_09223a60);
    FUN_03f5c2a4(&DAT_09225b58);
    FUN_03f5c2a4(&DAT_09221538);
    FUN_03f5c2a4(&DAT_09223958);
    FUN_03f5c2a4(&DAT_09223960);
    FUN_03f5c2a4(&DAT_09223aa0);
    FUN_03f5c2a4(&DAT_092239e8);
    FUN_03f5c2a4(&DAT_09222940);
    FUN_03f5c2a4(&DAT_09223988);
    FUN_03f5c2a4(&DAT_09223948);
    FUN_03f5c2a4(&DAT_091f9cd0);
    FUN_03f5c2a4(&DAT_09223a18);
    FUN_03f5c2a4(&DAT_09223a28);
    FUN_03f5c2a4(&DAT_09223a80);
    FUN_03f5c2a4(&DAT_09222928);
    FUN_03f5c2a4(&DAT_0921cee0);
    FUN_03f5c2a4(&DAT_092239d0);
    FUN_03f5c2a4(&DAT_092239b0);
    FUN_03f5c2a4(&DAT_0921cc68);
    FUN_03f5c2a4(&DAT_09223ac8);
    FUN_03f5c2a4(&DAT_09223a48);
    FUN_03f5c2a4(&DAT_09223938);
    FUN_03f5c2a4(&DAT_092239b8);
    FUN_03f5c2a4(&DAT_09223a98);
    FUN_03f5c2a4(&DAT_09223a30);
    FUN_03f5c2a4(&DAT_0921ce98);
    FUN_03f5c2a4(&DAT_09223a88);
    FUN_03f5c2a4(&DAT_091f9c90);
    FUN_03f5c2a4(&DAT_09223a20);
    FUN_03f5c2a4(&DAT_09222920);
    FUN_03f5c2a4(&DAT_09222960);
    FUN_03f5c2a4(&DAT_09223ab0);
    FUN_03f5c2a4(&DAT_0921cc60);
    FUN_03f5c2a4(&DAT_0920e210);
    FUN_03f5c2a4(&DAT_0921f400);
    FUN_03f5c2a4(&DAT_0920e1f8);
    FUN_03f5c2a4(&DAT_091f9e20);
    FUN_03f5c2a4(&DAT_09223a08);
    FUN_03f5c2a4(&DAT_09223998);
    FUN_03f5c2a4(&DAT_092239c8);
    FUN_03f5c2a4(&DAT_0921cec0);
    FUN_03f5c2a4(&DAT_0921ce90);
    FUN_03f5c2a4(&DAT_09223ac0);
    FUN_03f5c2a4(&DAT_09223ab8);
    FUN_03f5c2a4(&DAT_0921ceb8);
    FUN_03f5c2a4(&DAT_0921f048);
    FUN_03f5c2a4(&DAT_0921cc70);
    FUN_03f5c2a4(&DAT_09223980);
    FUN_03f5c2a4(&DAT_09223a38);
    FUN_03f5c2a4(&DAT_09223a58);
    FUN_03f5c2a4(&DAT_09223a68);
    FUN_03f5c2a4(&DAT_0920e218);
    FUN_03f5c2a4(&DAT_09222978);
    FUN_03f5c2a4(&DAT_09223a70);
    FUN_03f5c2a4(&DAT_09221cd0);
    FUN_03f5c2a4(&DAT_0921aa60);
    FUN_03f5c2a4(&DAT_092172e8);
    FUN_03f5c2a4(&DAT_0921ced8);
    FUN_03f5c2a4(&DAT_09222990);
    FUN_03f5c2a4(&DAT_09223940);
    FUN_03f5c2a4(&DAT_09223968);
    FUN_03f5c2a4(&DAT_092239a8);
    FUN_03f5c2a4(&DAT_09223ad0);
    FUN_03f5c2a4(&DAT_091f9c98);
    FUN_03f5c2a4(&DAT_09223a40);
    FUN_03f5c2a4(&DAT_0921cf00);
    FUN_03f5c2a4(&DAT_09221cc8);
    FUN_03f5c2a4(&DAT_09222930);
    FUN_03f5c2a4(&DAT_092239d8);
    FUN_03f5c2a4(&DAT_0921cc80);
    FUN_03f5c2a4(&DAT_09223ad8);
    FUN_03f5c2a4(&DAT_09223930);
    FUN_03f5c2a4(&DAT_0921cee8);
    FUN_03f5c2a4(&DAT_09221598);
    FUN_03f5c2a4(&DAT_091f9cb0);
    FUN_03f5c2a4(&DAT_092239e0);
    FUN_03f5c2a4(&DAT_0921cef8);
    FUN_03f5c2a4(&DAT_09223990);
    FUN_03f5c2a4(&DAT_0921cea0);
    FUN_03f5c2a4(&DAT_0921cec8);
    FUN_03f5c2a4(&DAT_09223970);
    DAT_095211f6 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_44[0] = '\0';
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921fa28);
    System_ArgumentNullException___ctor(uVar2,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c6b88);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar5);
  }
  local_38 = 0;
  uVar2 = System_String__ToLowerInvariant(param_1,0);
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(uVar2,0);
  if (uVar1 < 0x918f48b3) {
    if (uVar1 < 0x4e9d7c5f) {
      if (uVar1 < 0x231ca30e) {
        if (uVar1 < 0x17f2f67b) {
          if (uVar1 < 0x11900193) {
            if (uVar1 == 0x5d4d8a4) {
              puVar7 = &DAT_0921cef0;
              goto LAB_074709c8;
            }
            if (uVar1 != 0x1143a804) {
              if (uVar1 == 0x11900192) {
                puVar7 = &DAT_091f9e20;
                goto LAB_0747090c;
              }
              goto LAB_0746feb8;
            }
            puVar7 = &DAT_09223a58;
          }
          else {
            if (uVar1 != 0x163f2cc3) {
              if (uVar1 != 0x16c450bb) {
                if (uVar1 == 0x17f2f67a) {
                  puVar7 = &DAT_09223960;
                  goto LAB_074703c0;
                }
                goto LAB_0746feb8;
              }
              puVar7 = &DAT_0921cc68;
LAB_074704fc:
              uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
              uVar2 = 0;
              if ((uVar4 & 1) != 0) {
                uVar2 = thunk_FUN_03f9944c(DAT_09184f80);
                System_Security_Cryptography_HMACSHA1___ctor(uVar2,0);
                return uVar2;
              }
              goto LAB_0746febc;
            }
            puVar7 = &DAT_09223a50;
          }
LAB_07470554:
          uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_0918a478);
            System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(uVar2,0);
            return uVar2;
          }
        }
        else if (uVar1 < 0x20cbd515) {
          if (uVar1 == 0x18f506f7) {
            puVar7 = &DAT_092239b8;
LAB_07470454:
            uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
            uVar2 = 0;
            if ((uVar4 & 1) != 0) {
              uVar2 = thunk_FUN_03f9944c(DAT_09187cf8);
              System_Security_Cryptography_MACTripleDES___ctor(uVar2,0);
              return uVar2;
            }
          }
          else {
            if (uVar1 == 0x1f452337) {
              puVar7 = &DAT_09223970;
              goto LAB_07470554;
            }
            if (uVar1 != 0x20cbd514) goto LAB_0746feb8;
            puVar7 = &DAT_0921cec0;
LAB_07470988:
            uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
            uVar2 = 0;
            if ((uVar4 & 1) != 0) {
              uVar2 = thunk_FUN_03f9944c(DAT_09184f88);
              System_Security_Cryptography_HMACSHA256___ctor(uVar2,0);
              return uVar2;
            }
          }
        }
        else {
          if (uVar1 == 0x221961ec) {
            puVar7 = &DAT_0921cec8;
            goto LAB_074706dc;
          }
          if (uVar1 != 0x22e223f4) {
            if (uVar1 == 0x231ca30d) {
              puVar7 = &DAT_09223978;
              goto LAB_074704fc;
            }
            goto LAB_0746feb8;
          }
          uVar4 = System_String__op_Equality(uVar2,DAT_09223a60,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_0918a488);
            System_Security_Cryptography_SHA1Managed___ctor();
            return uVar2;
          }
        }
      }
      else if (uVar1 < 0x35a969b7) {
        if (uVar1 < 0x2bca62b6) {
          if (uVar1 == 0x29b8a409) {
            puVar7 = &DAT_0921ce88;
LAB_074703c0:
            uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
            uVar2 = 0;
            if ((uVar4 & 1) != 0) {
              uVar2 = thunk_FUN_03f9944c(DAT_091831f0);
              System_Security_Cryptography_DSASignatureDescription___ctor();
              return uVar2;
            }
          }
          else {
            if (uVar1 != 0x2a3b3648) {
              if (uVar1 == 0x2bca62b5) {
                puVar7 = &DAT_0921cc70;
                goto LAB_07470988;
              }
              goto LAB_0746feb8;
            }
            uVar4 = System_String__op_Equality(uVar2,DAT_092172e8,0);
            uVar2 = 0;
            if ((uVar4 & 1) != 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar7 = &DAT_0920e198;
              goto LAB_07470648;
            }
          }
        }
        else if (uVar1 == 0x32e02fed) {
          puVar7 = &DAT_09223a28;
LAB_0747067c:
          uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_09189a20);
            System_Security_Cryptography_RSAPKCS1SHA384SignatureDescription___ctor();
            return uVar2;
          }
        }
        else if (uVar1 == 0x344b9633) {
          puVar7 = &DAT_0921ce98;
LAB_0747024c:
          uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_09189a10);
            System_Security_Cryptography_RSAPKCS1SHA1SignatureDescription___ctor();
            return uVar2;
          }
        }
        else {
          if (uVar1 != 0x35a969b6) goto LAB_0746feb8;
          uVar4 = System_String__op_Equality(uVar2,DAT_09223968,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_091831f8);
            System_Security_Cryptography_DSASignatureFormatter___ctor(uVar2,0);
            return uVar2;
          }
        }
      }
      else if (uVar1 < 0x41dc7d8a) {
        if (uVar1 == 0x3992d306) {
          puVar7 = &DAT_0921cea0;
          goto LAB_07470554;
        }
        if (uVar1 != 0x3b92765d) {
          if (uVar1 == 0x41dc7d89) {
            puVar7 = &DAT_09221d88;
            goto LAB_07470108;
          }
          goto LAB_0746feb8;
        }
        puVar7 = &DAT_09223a20;
LAB_07470144:
        uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
        uVar2 = 0;
        if ((uVar4 & 1) != 0) {
          uVar2 = thunk_FUN_03f9944c(DAT_09189a18);
          System_Security_Cryptography_RSAPKCS1SHA256SignatureDescription___ctor();
          return uVar2;
        }
      }
      else if (uVar1 < 0x45a1c244) {
        if (uVar1 != 0x4463f59a) {
          if (uVar1 == 0x45a1c243) {
            puVar7 = &DAT_09223a00;
            goto LAB_07470334;
          }
          goto LAB_0746feb8;
        }
        uVar4 = System_String__op_Equality(uVar2,DAT_09223a40,0);
        uVar2 = 0;
        if ((uVar4 & 1) != 0) {
          uVar2 = thunk_FUN_03f9944c(DAT_09189a38);
          System_Security_Cryptography_RSAPKCS1SignatureFormatter___ctor(uVar2,0);
          return uVar2;
        }
      }
      else {
        if (uVar1 != 0x4c3f0692) {
          if (uVar1 == 0x4e9d7c5e) {
            puVar7 = &DAT_0921ce90;
            goto LAB_074704fc;
          }
          goto LAB_0746feb8;
        }
        puVar7 = &DAT_09223ad0;
LAB_0747090c:
        uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
        uVar2 = 0;
        if ((uVar4 & 1) != 0) {
          uVar2 = thunk_FUN_03f9944c(DAT_0918c0e0);
          System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor();
          return uVar2;
        }
      }
      goto LAB_0746febc;
    }
    if (uVar1 < 0x6f03d3d1) {
      if (uVar1 < 0x633b63cf) {
        if (uVar1 < 0x5fa6aed9) {
          if (uVar1 == 0x591e34db) {
            puVar7 = &DAT_09223940;
            goto LAB_07470380;
          }
          if (uVar1 == 0x5f67535d) {
            puVar7 = &DAT_09223a90;
            goto LAB_074709c8;
          }
          if (uVar1 == 0x5fa6aed8) {
            puVar7 = &DAT_09222938;
            goto LAB_074708d0;
          }
        }
        else {
          if (uVar1 == 0x5ff6c686) {
            puVar7 = &DAT_092239f0;
            goto LAB_074705d0;
          }
          if (uVar1 == 0x6123ca4a) {
            puVar7 = &DAT_092239e0;
LAB_074701bc:
            uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
            uVar2 = 0;
            if ((uVar4 & 1) != 0) {
              uVar2 = thunk_FUN_03f9944c(DAT_091899a8);
              System_Security_Cryptography_RC2CryptoServiceProvider___ctor(uVar2,0);
              return uVar2;
            }
            goto LAB_0746febc;
          }
          if (uVar1 == 0x633b63ce) {
            puVar7 = &DAT_09223a78;
            goto LAB_07470594;
          }
        }
      }
      else if (uVar1 < 0x668b5023) {
        if (uVar1 == 0x648d81be) {
          puVar7 = &DAT_092239c0;
          goto LAB_07470854;
        }
        if (uVar1 == 0x649d3623) {
          puVar7 = &DAT_0921cef8;
          goto LAB_07470594;
        }
        if (uVar1 == 0x668b5022) {
          uVar4 = System_String__op_Equality(uVar2,DAT_09225b58,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar7 = &DAT_0920e200;
            goto LAB_07470648;
          }
          goto LAB_0746febc;
        }
      }
      else {
        if (uVar1 == 0x6a01d0b1) {
          puVar7 = &DAT_092239d0;
          goto LAB_07470758;
        }
        if (uVar1 == 0x6c83c990) {
          puVar7 = &DAT_0921cc80;
          goto LAB_074703fc;
        }
        if (uVar1 == 0x6f03d3d0) {
          puVar7 = &DAT_09221598;
          goto LAB_074701bc;
        }
      }
    }
    else if (uVar1 < 0x85ead568) {
      if (uVar1 < 0x7e66c576) {
        if (uVar1 == 0x7b6a2c14) {
          puVar7 = &DAT_09222940;
          goto LAB_07470554;
        }
        if (uVar1 == 0x7d52e567) {
          puVar7 = &DAT_09221cd0;
          goto LAB_07470334;
        }
        if (uVar1 == 0x7e66c575) {
          puVar7 = &DAT_09222930;
          goto LAB_074709c8;
        }
      }
      else {
        if (uVar1 == 0x840039d1) {
          puVar7 = &DAT_09223ab8;
          goto LAB_074708d0;
        }
        if (uVar1 == 0x85ead567) {
          uVar4 = System_String__op_Equality(uVar2,DAT_09223958,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_091831e8);
            System_Security_Cryptography_DSASignatureDeformatter___ctor(uVar2,0);
            return uVar2;
          }
          goto LAB_0746febc;
        }
        if (uVar1 == 0x7f0e6d33) {
          puVar7 = &DAT_09224428;
          goto LAB_0747090c;
        }
      }
    }
    else if (uVar1 < 0x8bdca022) {
      if (uVar1 == 0x874c798b) {
        puVar7 = &DAT_092239c8;
LAB_07470854:
        uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
        uVar2 = 0;
        if ((uVar4 & 1) != 0) {
          uVar2 = thunk_FUN_03f9944c(DAT_09187d28);
          System_Security_Cryptography_MD5CryptoServiceProvider___ctor();
          return uVar2;
        }
        goto LAB_0746febc;
      }
      if (uVar1 == 0x8b81ea21) {
        puVar7 = &DAT_092239b0;
        goto LAB_074704fc;
      }
      if (uVar1 == 0x8bdca021) {
        puVar7 = &DAT_09223a68;
        goto LAB_07470594;
      }
    }
    else if (uVar1 < 0x8ebaf25f) {
      if (uVar1 == 0x8eaabef3) {
        puVar7 = &DAT_0921f400;
        goto LAB_07470854;
      }
      if (uVar1 == 0x8ebaf25e) {
        puVar7 = &DAT_09223a98;
        goto LAB_074709c8;
      }
    }
    else {
      if (uVar1 == 0x8ff6fd12) {
        puVar7 = &DAT_09223998;
        goto LAB_07470988;
      }
      if (uVar1 == 0x918f48b2) {
        puVar7 = &DAT_0921cc60;
        goto LAB_07470948;
      }
    }
LAB_0746feb8:
    uVar2 = 0;
  }
  else {
    if (0xc713dfb5 < uVar1) {
      if (uVar1 < 0xe4f72613) {
        if (uVar1 < 0xd2599304) {
          if (uVar1 < 0xce0f60ce) {
            if (uVar1 == 0xcb9e150e) {
              puVar7 = &DAT_09223938;
LAB_07470380:
              uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
              uVar2 = 0;
              if ((uVar4 & 1) != 0) {
                uVar2 = thunk_FUN_03f9944c(DAT_09183180);
                System_Security_Cryptography_DESCryptoServiceProvider___ctor(uVar2,0);
                return uVar2;
              }
            }
            else {
              if (uVar1 != 0xcd358164) {
                if (uVar1 == 0xce0f60cd) {
                  puVar7 = &DAT_09223ac0;
                  goto LAB_074708d0;
                }
                goto LAB_0746feb8;
              }
              puVar7 = &DAT_09223a10;
LAB_07470108:
              uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
              uVar2 = 0;
              if ((uVar4 & 1) != 0) {
                uVar2 = thunk_FUN_03f9944c(DAT_091899f0);
                System_Security_Cryptography_RSACryptoServiceProvider___ctor();
                return uVar2;
              }
            }
          }
          else if (uVar1 == 0xd105b9d5) {
            uVar4 = System_String__op_Equality(uVar2,DAT_091f9cd0,0);
            uVar2 = 0;
            if ((uVar4 & 1) != 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar7 = &DAT_0920e208;
LAB_07470648:
              uVar2 = FUN_03f5c738(*puVar7,DAT_091dc128,DAT_091c6b88);
              local_38 = uVar2;
            }
          }
          else {
            if (uVar1 != 0xd20a3896) {
              if (uVar1 != 0xd2599303) goto LAB_0746feb8;
              puVar7 = &DAT_0921a528;
              goto LAB_07470380;
            }
            uVar4 = System_String__op_Equality(uVar2,DAT_091f9c90,0);
            uVar2 = 0;
            if ((uVar4 & 1) != 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar7 = &DAT_0920e218;
              goto LAB_07470648;
            }
          }
        }
        else if (uVar1 < 0xdd0745d3) {
          if (uVar1 != 0xd30a3a29) {
            if (uVar1 == 0xd4c6e28d) {
              puVar7 = &DAT_09223930;
              goto LAB_07470108;
            }
            if (uVar1 == 0xdd0745d2) {
              puVar7 = &DAT_09223ab0;
              goto LAB_074708d0;
            }
            goto LAB_0746feb8;
          }
          uVar4 = System_String__op_Equality(uVar2,DAT_091f9c98,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar7 = &DAT_0920e210;
            goto LAB_07470648;
          }
        }
        else if (uVar1 < 0xdf0a4d0e) {
          if (uVar1 == 0xdd397abb) {
            puVar7 = &DAT_09223980;
            goto LAB_07470798;
          }
          if (uVar1 != 0xdf0a4d0d) goto LAB_0746feb8;
          uVar4 = System_String__op_Equality(uVar2,DAT_091f9cb0,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar7 = &DAT_0920e1f8;
            goto LAB_07470648;
          }
        }
        else {
          if (uVar1 != 0xe0dcb432) {
            if (uVar1 == 0xe4f72612) {
              puVar7 = &DAT_09221cc8;
              goto LAB_07470334;
            }
            goto LAB_0746feb8;
          }
          puVar7 = &DAT_0921cf00;
LAB_074708d0:
          uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_0918a4a0);
            System_Security_Cryptography_SHA512Managed___ctor();
            return uVar2;
          }
        }
        goto LAB_0746febc;
      }
      if (uVar1 < 0xf29d7e16) {
        if (uVar1 < 0xed2e002e) {
          if (uVar1 == 0xe57a18ba) {
            puVar7 = &DAT_09223948;
LAB_07470818:
            uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
            uVar2 = 0;
            if ((uVar4 & 1) != 0) {
              uVar2 = thunk_FUN_03f9944c(DAT_091831d8);
              System_Security_Cryptography_DSACryptoServiceProvider___ctor();
              return uVar2;
            }
            goto LAB_0746febc;
          }
          if (uVar1 == 0xe74b79dd) {
            puVar7 = &DAT_0921ced8;
            goto LAB_07470144;
          }
          if (uVar1 == 0xed2e002d) {
            puVar7 = &DAT_09222920;
            goto LAB_07470554;
          }
        }
        else {
          if (uVar1 == 0xedeadb74) {
            puVar7 = &DAT_09223aa8;
            goto LAB_074708d0;
          }
          if (uVar1 == 0xee9e1487) {
            puVar7 = &DAT_09223950;
            goto LAB_07470818;
          }
          if (uVar1 == 0xf29d7e15) {
            puVar7 = &DAT_092239e8;
LAB_074705d0:
            uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
            uVar2 = 0;
            if ((uVar4 & 1) != 0) {
              uVar2 = thunk_FUN_03f9944c(DAT_0918a308);
              System_Security_Cryptography_RijndaelManaged___ctor(uVar2,0);
              return uVar2;
            }
            goto LAB_0746febc;
          }
        }
      }
      else if (uVar1 < 0xf4f725c0) {
        if (uVar1 == 0xf3ea6442) {
          puVar7 = &DAT_0921cc58;
LAB_07470798:
          uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_09184f70);
            System_Security_Cryptography_HMACMD5___ctor(uVar2,0);
            return uVar2;
          }
          goto LAB_0746febc;
        }
        if (uVar1 == 0xf4c0a880) {
          puVar7 = &DAT_0921f048;
          goto LAB_07470454;
        }
        if (uVar1 == 0xf4f725bf) {
          puVar7 = &DAT_09223ad8;
          goto LAB_0747090c;
        }
      }
      else if (uVar1 < 0xf935eb43) {
        if (uVar1 == 0xf594c90b) {
          uVar4 = System_String__op_Equality(uVar2,DAT_09223a38,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_09189a30);
            System_Security_Cryptography_RSAPKCS1SignatureDeformatter___ctor(uVar2,0);
            return uVar2;
          }
          goto LAB_0746febc;
        }
        if (uVar1 == 0xf935eb42) {
          puVar7 = &DAT_09223aa0;
          goto LAB_074709c8;
        }
      }
      else {
        if (uVar1 == 0xfa539971) {
          puVar7 = &DAT_09223a88;
LAB_074709c8:
          uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_0918a498);
            System_Security_Cryptography_SHA384Managed___ctor();
            return uVar2;
          }
          goto LAB_0746febc;
        }
        if (uVar1 == 0xfe3b944e) {
          puVar7 = &DAT_09223ac8;
          goto LAB_074705d0;
        }
      }
      goto LAB_0746feb8;
    }
    if (0xae17e7b2 < uVar1) {
      if (uVar1 < 0xb92b3f9a) {
        if (uVar1 < 0xb442253f) {
          if (uVar1 == 0xaea9f8d9) {
            puVar7 = &DAT_0921ced0;
LAB_074703fc:
            uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
            uVar2 = 0;
            if ((uVar4 & 1) != 0) {
              uVar2 = thunk_FUN_03f9944c(DAT_09184f98);
              System_Security_Cryptography_HMACSHA512___ctor(uVar2,0);
              return uVar2;
            }
            goto LAB_0746febc;
          }
          if (uVar1 == 0xaeb0bb97) {
            puVar7 = &DAT_09223a48;
            goto LAB_07470554;
          }
          if (uVar1 == 0xb442253e) {
            puVar7 = &DAT_092239a0;
            goto LAB_074706dc;
          }
        }
        else {
          if (uVar1 == 0xb70f1a30) {
            puVar7 = &DAT_09223a30;
            goto LAB_0747071c;
          }
          if (uVar1 == 0xb84142cf) {
            puVar7 = &DAT_09223a18;
            goto LAB_0747024c;
          }
          if (uVar1 == 0xb92b3f99) {
            puVar7 = &DAT_0921ceb8;
            goto LAB_07470948;
          }
        }
      }
      else if (uVar1 < 0xbe55a761) {
        if (uVar1 == 0xbc10540c) {
          puVar7 = &DAT_09223990;
          goto LAB_074704fc;
        }
        if (uVar1 == 0xbd5d4e1d) {
          puVar7 = &DAT_09224410;
          goto LAB_0747090c;
        }
        if (uVar1 == 0xbe55a760) {
          puVar7 = &DAT_09223a08;
LAB_07470758:
          uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_091899e0);
            System_Security_Cryptography_RNGCryptoServiceProvider___ctor(uVar2,0);
            return uVar2;
          }
          goto LAB_0746febc;
        }
      }
      else if (uVar1 < 0xc30440fd) {
        if (uVar1 == 0xc0235cb3) {
          puVar7 = &DAT_0921aa60;
          goto LAB_07470818;
        }
        if (uVar1 == 0xc30440fc) {
          puVar7 = &DAT_09221538;
          goto LAB_07470758;
        }
      }
      else {
        if (uVar1 == 0xc471689f) {
          puVar7 = &DAT_09223988;
LAB_07470948:
          uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_09184f78);
            System_Security_Cryptography_HMACRIPEMD160___ctor(uVar2,0);
            return uVar2;
          }
          goto LAB_0746febc;
        }
        if (uVar1 == 0xc713dfb5) {
          puVar7 = &DAT_0921cee0;
          goto LAB_0747067c;
        }
      }
      goto LAB_0746feb8;
    }
    if (uVar1 < 0xa00e2b1e) {
      if (uVar1 < 0x941c3113) {
        if (uVar1 == 0x921d7826) {
          puVar7 = &DAT_092239f8;
LAB_07470334:
          uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
          uVar2 = 0;
          if ((uVar4 & 1) != 0) {
            uVar2 = thunk_FUN_03f9944c(DAT_091899d8);
            System_Security_Cryptography_RIPEMD160Managed___ctor(uVar2,0);
            return uVar2;
          }
          goto LAB_0746febc;
        }
        if (uVar1 == 0x93b6b583) {
          puVar7 = &DAT_092239a8;
          goto LAB_074703fc;
        }
        if (uVar1 != 0x941c3112) goto LAB_0746feb8;
        puVar7 = &DAT_09223a80;
      }
      else if (uVar1 == 0x9cd435fa) {
        puVar7 = &DAT_09222960;
      }
      else {
        if (uVar1 != 0x9e9e5f9d) {
          if (uVar1 == 0xa00e2b1d) {
            puVar7 = &DAT_092239d8;
            goto LAB_074701bc;
          }
          goto LAB_0746feb8;
        }
        puVar7 = &DAT_09222928;
      }
LAB_07470594:
      uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
      uVar2 = 0;
      if ((uVar4 & 1) != 0) {
        uVar2 = thunk_FUN_03f9944c(DAT_0918a490);
        System_Security_Cryptography_SHA256Managed___ctor();
        return uVar2;
      }
    }
    else {
      if (uVar1 < 0xa714c8ee) {
        if (uVar1 == 0xa093ee6b) {
          puVar7 = &DAT_09222990;
          goto LAB_074708d0;
        }
        if (uVar1 == 0xa0f81c56) {
          puVar7 = &DAT_09222978;
          goto LAB_074709c8;
        }
        if (uVar1 == 0xa714c8ed) {
          puVar7 = &DAT_09223a70;
          goto LAB_07470594;
        }
        goto LAB_0746feb8;
      }
      if (uVar1 == 0xa853c918) {
        puVar7 = &DAT_0921cee8;
LAB_0747071c:
        uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
        uVar2 = 0;
        if ((uVar4 & 1) != 0) {
          uVar2 = thunk_FUN_03f9944c(DAT_09189a28);
          System_Security_Cryptography_RSAPKCS1SHA512SignatureDescription___ctor();
          return uVar2;
        }
      }
      else {
        if (uVar1 != 0xaa2ded7d) {
          if (uVar1 == 0xae17e7b2) {
            puVar7 = &DAT_09221cc0;
            goto LAB_074705d0;
          }
          goto LAB_0746feb8;
        }
        puVar7 = &DAT_0921cc78;
LAB_074706dc:
        uVar4 = System_String__op_Equality(uVar2,*puVar7,0);
        uVar2 = 0;
        if ((uVar4 & 1) != 0) {
          uVar2 = thunk_FUN_03f9944c(DAT_09184f90);
          System_Security_Cryptography_HMACSHA384___ctor(uVar2,0);
          return uVar2;
        }
      }
    }
  }
LAB_0746febc:
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__op_Equality(uVar2,0,0);
  if ((uVar4 & 1) == 0) goto LAB_07470018;
  if (*(int *)(DAT_09182f88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_44[0] = '\0';
  local_40 = **(undefined8 **)(DAT_09182f88 + 0xb8);
  System_Threading_Monitor__Enter(local_40,local_44,0);
  if (*(int *)(DAT_09182f88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(*(long *)(DAT_09182f88 + 0xb8) + 8);
  iVar6 = 0;
  if (lVar3 != 0) {
    iVar6 = 0xb4;
  }
  if (iVar6 == 0xb4) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = FUN_06fd9fbc(lVar3,param_1,&local_38,DAT_091a0070);
    if ((uVar4 & 1) == 0) goto LAB_0746ffa8;
    uVar2 = System_Activator__CreateInstance(local_38,param_2,0);
    iVar6 = 0xb7;
  }
  else if (iVar6 == 0) {
LAB_0746ffa8:
    uVar2 = 0;
    iVar6 = 0xb9;
  }
  else {
    uVar2 = 0;
  }
  if (local_44[0] != '\0') {
    System_Threading_Monitor__Exit(local_40,0);
  }
  if ((iVar6 != 0xb9) && (iVar6 != 0)) {
    return uVar2;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = FUN_03f5c738(param_1,DAT_091dc128,DAT_091c6b88);
  local_38 = uVar2;
LAB_07470018:
  uVar2 = System_Activator__CreateInstance(uVar2,param_2,0);
  return uVar2;
}

