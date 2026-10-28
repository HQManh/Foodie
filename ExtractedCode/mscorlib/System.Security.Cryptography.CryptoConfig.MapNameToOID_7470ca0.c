// rea decompile_all
// name: System.Security.Cryptography.CryptoConfig$$MapNameToOID
// address: 0x7470ca0
// body: available
// range: 0x7470ca0-0x7471473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7471470 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Security_Cryptography_CryptoConfig__MapNameToOID(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((DAT_095211f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09224428);
    FUN_03f5c2a4(&DAT_09223a90);
    FUN_03f5c2a4(&DAT_09223a00);
    FUN_03f5c2a4(&DAT_091f9c58);
    FUN_03f5c2a4(&DAT_091f99e0);
    FUN_03f5c2a4(&DAT_092239f8);
    FUN_03f5c2a4(&DAT_0921a528);
    FUN_03f5c2a4(&DAT_09223a78);
    FUN_03f5c2a4(&DAT_09223aa8);
    FUN_03f5c2a4(&DAT_091f9ac0);
    FUN_03f5c2a4(&DAT_091f99c8);
    FUN_03f5c2a4(&DAT_09223a50);
    FUN_03f5c2a4(&DAT_092239c0);
    FUN_03f5c2a4(&DAT_09223a60);
    FUN_03f5c2a4(&DAT_09223aa0);
    FUN_03f5c2a4(&DAT_09222940);
    FUN_03f5c2a4(&DAT_09223a80);
    FUN_03f5c2a4(&DAT_091f9c68);
    FUN_03f5c2a4(&DAT_09224430);
    FUN_03f5c2a4(&DAT_091f9970);
    FUN_03f5c2a4(&DAT_09223a48);
    FUN_03f5c2a4(&DAT_09223a98);
    FUN_03f5c2a4(&DAT_09223a88);
    FUN_03f5c2a4(&DAT_09222960);
    FUN_03f5c2a4(&DAT_09223ab0);
    FUN_03f5c2a4(&DAT_0921f400);
    FUN_03f5c2a4(&DAT_091f99d0);
    FUN_03f5c2a4(&DAT_092239c8);
    FUN_03f5c2a4(&DAT_09223ac0);
    FUN_03f5c2a4(&DAT_09223ab8);
    FUN_03f5c2a4(&DAT_091f9a88);
    FUN_03f5c2a4(&DAT_09223a58);
    FUN_03f5c2a4(&DAT_09223a68);
    FUN_03f5c2a4(&DAT_09222978);
    FUN_03f5c2a4(&DAT_09223a70);
    FUN_03f5c2a4(&DAT_09221cd0);
    FUN_03f5c2a4(&DAT_09222990);
    FUN_03f5c2a4(&DAT_091f9c60);
    FUN_03f5c2a4(&DAT_091f9ab0);
    FUN_03f5c2a4(&DAT_09221598);
    DAT_095211f7 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0921fa28);
    System_ArgumentNullException___ctor(uVar2,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c6ba0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar4);
  }
  uVar2 = System_String__ToLowerInvariant(param_1,0);
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(uVar2,0);
  if (0x8eaabef3 < uVar1) {
    if (0xa0f81c56 < uVar1) {
      if (uVar1 < 0xd2599304) {
        if (uVar1 < 0xaeb0bb98) {
          if (uVar1 != 0xa714c8ed) {
            if (uVar1 != 0xaeb0bb97) {
              return 0;
            }
            puVar5 = &DAT_09223a48;
            goto LAB_074712a8;
          }
          puVar5 = &DAT_09223a70;
          goto LAB_074713c8;
        }
        if (uVar1 != 0xce0f60cd) {
          if (uVar1 != 0xd2599303) {
            return 0;
          }
          uVar3 = System_String__op_Equality(uVar2,DAT_0921a528,0);
          puVar5 = &DAT_091f9ab0;
          goto LAB_074712fc;
        }
        puVar5 = &DAT_09223ac0;
      }
      else {
        if (0xedeadb74 < uVar1) {
          if (uVar1 == 0xf935eb42) {
            puVar5 = &DAT_09223aa0;
          }
          else {
            if (uVar1 != 0xfa539971) {
              return 0;
            }
            puVar5 = &DAT_09223a88;
          }
          goto LAB_074713f8;
        }
        if (uVar1 == 0xdd0745d2) {
          puVar5 = &DAT_09223ab0;
        }
        else {
          if (uVar1 != 0xedeadb74) {
            return 0;
          }
          puVar5 = &DAT_09223aa8;
        }
      }
LAB_07471398:
      uVar3 = System_String__op_Equality(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      puVar5 = &DAT_091f9c68;
      goto LAB_0747141c;
    }
    if (uVar1 < 0x941c3113) {
      if (uVar1 == 0x8ebaf25e) {
        puVar5 = &DAT_09223a98;
LAB_074713f8:
        uVar3 = System_String__op_Equality(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar5 = &DAT_091f9c60;
        goto LAB_0747141c;
      }
      if (uVar1 == 0x921d7826) {
        puVar5 = &DAT_092239f8;
        goto LAB_07471350;
      }
      if (uVar1 != 0x941c3112) {
        return 0;
      }
      puVar5 = &DAT_09223a80;
    }
    else {
      if (0x9f43e8ae < uVar1) {
        if (uVar1 == 0xa093ee6b) {
          puVar5 = &DAT_09222990;
          goto LAB_07471398;
        }
        if (uVar1 != 0xa0f81c56) {
          return 0;
        }
        puVar5 = &DAT_09222978;
        goto LAB_074713f8;
      }
      if (uVar1 != 0x9cd435fa) {
        if (uVar1 != 0x9f43e8ae) {
          return 0;
        }
        uVar3 = System_String__op_Equality(uVar2,DAT_09224430,0);
        puVar5 = &DAT_091f9970;
        goto LAB_074712fc;
      }
      puVar5 = &DAT_09222960;
    }
LAB_074713c8:
    uVar3 = System_String__op_Equality(uVar2,*puVar5,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    puVar5 = &DAT_091f9c58;
    goto LAB_0747141c;
  }
  if (uVar1 < 0x648d81bf) {
    if (uVar1 < 0x22e223f5) {
      if (uVar1 == 0x1143a804) {
        puVar5 = &DAT_09223a58;
      }
      else if (uVar1 == 0x163f2cc3) {
        puVar5 = &DAT_09223a50;
      }
      else {
        if (uVar1 != 0x22e223f4) {
          return 0;
        }
        puVar5 = &DAT_09223a60;
      }
LAB_074712a8:
      uVar3 = System_String__op_Equality(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      puVar5 = &DAT_091f9a88;
      goto LAB_0747141c;
    }
    if (uVar1 < 0x5f67535e) {
      if (uVar1 != 0x45a1c243) {
        if (uVar1 != 0x5f67535d) {
          return 0;
        }
        puVar5 = &DAT_09223a90;
        goto LAB_074713f8;
      }
      puVar5 = &DAT_09223a00;
LAB_07471350:
      uVar3 = System_String__op_Equality(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      puVar5 = &DAT_091f9ac0;
      goto LAB_0747141c;
    }
    if (uVar1 == 0x633b63ce) {
      puVar5 = &DAT_09223a78;
      goto LAB_074713c8;
    }
    if (uVar1 != 0x648d81be) {
      return 0;
    }
    puVar5 = &DAT_092239c0;
  }
  else {
    if (uVar1 < 0x7f0e6d34) {
      if (0x7b6a2c14 < uVar1) {
        if (uVar1 != 0x7d52e567) {
          if (uVar1 != 0x7f0e6d33) {
            return 0;
          }
          uVar3 = System_String__op_Equality(uVar2,DAT_09224428,0);
          puVar5 = &DAT_091f99e0;
          goto LAB_074712fc;
        }
        puVar5 = &DAT_09221cd0;
        goto LAB_07471350;
      }
      if (uVar1 == 0x6f03d3d0) {
        uVar3 = System_String__op_Equality(uVar2,DAT_09221598,0);
        puVar5 = &DAT_091f99d0;
LAB_074712fc:
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        return *puVar5;
      }
      if (uVar1 != 0x7b6a2c14) {
        return 0;
      }
      puVar5 = &DAT_09222940;
      goto LAB_074712a8;
    }
    if (uVar1 < 0x874c798c) {
      if (uVar1 == 0x840039d1) {
        puVar5 = &DAT_09223ab8;
        goto LAB_07471398;
      }
      if (uVar1 != 0x874c798b) {
        return 0;
      }
      puVar5 = &DAT_092239c8;
    }
    else {
      if (uVar1 == 0x8bdca021) {
        puVar5 = &DAT_09223a68;
        goto LAB_074713c8;
      }
      if (uVar1 != 0x8eaabef3) {
        return 0;
      }
      puVar5 = &DAT_0921f400;
    }
  }
  uVar3 = System_String__op_Equality(uVar2,*puVar5,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  puVar5 = &DAT_091f99c8;
LAB_0747141c:
  return *puVar5;
}

