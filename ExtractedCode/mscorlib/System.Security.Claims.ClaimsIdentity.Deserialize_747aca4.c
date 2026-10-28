// rea decompile_all
// name: System.Security.Claims.ClaimsIdentity$$Deserialize
// address: 0x747aca4
// body: available
// range: 0x747aca4-0x747afc7 inclusive
// range: 0x747afcc-0x747b333 inclusive
// range: 0x747b338-0x747b33b inclusive
// range: 0x747b3a0-0x747b413 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747afc4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747b330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747b338 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747b3c4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747b40c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747b410 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0747b3c0) */

void System_Security_Claims_ClaimsIdentity__Deserialize
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  
  if ((DAT_09521246 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c60);
    FUN_03f5c2a4(&DAT_09182560);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188030);
    FUN_03f5c2a4(&DAT_0920e190);
    FUN_03f5c2a4(&DAT_0920e170);
    FUN_03f5c2a4(&DAT_0920e168);
    FUN_03f5c2a4(&DAT_0920e180);
    FUN_03f5c2a4(&DAT_0920e188);
    FUN_03f5c2a4(&DAT_0920e158);
    FUN_03f5c2a4(&DAT_0920e178);
    FUN_03f5c2a4(&DAT_0920e160);
    DAT_09521246 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar6,uVar10,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091c4c00);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar10);
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09181c60);
  if ((param_5 & 1) == 0) {
    System_Runtime_Serialization_Formatters_Binary_BinaryFormatter___ctor(lVar3,0);
  }
  else {
    System_Runtime_Serialization_Formatters_Binary_BinaryFormatter___ctor(lVar3,0,param_3,param_4,0)
    ;
  }
  lVar4 = System_Runtime_Serialization_SerializationInfo__GetEnumerator(param_2,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar4,0);
  do {
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar6 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Name(lVar4,0);
    uVar2 = <PrivateImplementationDetails>__ComputeStringHash(uVar6,0);
    if (0x392bbe2a < uVar2) {
      if (uVar2 < 0x57ff969b) {
        if (uVar2 == 0x56a5f574) {
          uVar5 = System_String__op_Equality(uVar6,DAT_0920e170,0);
          if ((uVar5 & 1) != 0) {
            uVar6 = System_Runtime_Serialization_SerializationInfo__GetString
                              (param_2,DAT_0920e170,0);
            System_Security_Claims_ClaimsIdentity__DeserializeClaims(param_1,uVar6);
          }
        }
        else if ((uVar2 == 0x57ff969a) &&
                (uVar5 = System_String__op_Equality(uVar6,DAT_0920e158,0), (uVar5 & 1) != 0)) {
          uVar6 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_0920e158,0);
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182b88);
          }
          uVar6 = System_Convert__FromBase64String(uVar6,0);
          plVar7 = (long *)thunk_FUN_03f9944c(DAT_09188030);
          System_IO_MemoryStream___ctor(plVar7,uVar6,0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar8 = (long *)System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__Deserialize
                                     (lVar3,plVar7,0,0,0);
          lVar11 = DAT_09182560;
          if (plVar8 == (long *)0x0) {
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          else {
            bVar1 = *(byte *)(DAT_09182560 + 0x130);
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09182560)) {
LAB_0747afc0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar8);
            }
            *(long **)(param_1 + 0x40) = plVar8;
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar11))
            goto LAB_0747afc0;
          }
          thunk_FUN_03f5d7b8(param_1 + 0x40,plVar8);
          if (plVar7 != (long *)0x0) {
            lVar11 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar5 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_09185a58) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0747b2b0;
                }
                uVar5 = uVar5 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar5 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_0747b2b0:
            (*(code *)*puVar9)(plVar7,puVar9[1]);
          }
        }
      }
      else if (uVar2 == 0xda183f20) {
        uVar5 = System_String__op_Equality(uVar6,DAT_0920e168,0);
        if ((uVar5 & 1) != 0) {
          uVar6 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_0920e168,0);
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182b88);
          }
          uVar6 = System_Convert__FromBase64String(uVar6,0);
          plVar7 = (long *)thunk_FUN_03f9944c(DAT_09188030);
          System_IO_MemoryStream___ctor(plVar7,uVar6,0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar6 = System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__Deserialize
                            (lVar3,plVar7,0,0,0);
          *(undefined8 *)(param_1 + 0x50) = uVar6;
          thunk_FUN_03f5d7b8(param_1 + 0x50);
          if (plVar7 != (long *)0x0) {
            lVar11 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar5 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_09185a58) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0747b2f8;
                }
                uVar5 = uVar5 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar5 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_0747b2f8:
            (*(code *)*puVar9)(plVar7,puVar9[1]);
          }
        }
      }
      else if ((uVar2 == 0x93d62477) &&
              (uVar5 = System_String__op_Equality(uVar6,DAT_0920e190,0), (uVar5 & 1) != 0)) {
        System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_0920e190,0);
      }
      goto LAB_0747b31c;
    }
    if (uVar2 < 0x25305254) {
      if (uVar2 == 0x16452edd) {
        uVar5 = System_String__op_Equality(uVar6,DAT_0920e178,0);
        if ((uVar5 & 1) != 0) {
          uVar6 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_0920e178,0);
          *(undefined8 *)(param_1 + 0x58) = uVar6;
          lVar11 = param_1 + 0x58;
          goto LAB_0747b114;
        }
      }
      else if ((uVar2 == 0x25305253) &&
              (uVar5 = System_String__op_Equality(uVar6,DAT_0920e188,0), (uVar5 & 1) != 0)) {
        uVar6 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_0920e188,0);
        *(undefined8 *)(param_1 + 0x30) = uVar6;
        lVar11 = param_1 + 0x30;
LAB_0747b114:
        thunk_FUN_03f5d7b8(lVar11,uVar6);
      }
    }
    else if (uVar2 == 0x271ee529) {
      uVar5 = System_String__op_Equality(uVar6,DAT_0920e160,0);
      if ((uVar5 & 1) != 0) {
        uVar6 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_0920e160,0);
        *(undefined8 *)(param_1 + 0x48) = uVar6;
        lVar11 = param_1 + 0x48;
        goto LAB_0747b114;
      }
    }
    else if ((uVar2 == 0x392bbe2a) &&
            (uVar5 = System_String__op_Equality(uVar6,DAT_0920e180,0), (uVar5 & 1) != 0)) {
      uVar6 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_0920e180,0);
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      lVar11 = param_1 + 0x28;
      goto LAB_0747b114;
    }
LAB_0747b31c:
    uVar5 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar4,0);
  } while( true );
}

