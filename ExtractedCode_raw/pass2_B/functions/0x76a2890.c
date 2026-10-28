// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$GetAttributeConstructor
// address: 0x76a2890
// body: available
// range: 0x76a2890-0x76a2d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a2cb0 to 0x75d0df8 System.Type$$GetConstructor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76a2d44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a2d48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a2d54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a2d9c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_DefaultContractResolver__GetAttributeConstructor
          (undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_09522622 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cb418);
    FUN_03f5c2a4(&DAT_091785f8);
    FUN_03f5c2a4(&DAT_0917a3d8);
    FUN_03f5c2a4(&DAT_0917aa80);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e8d28);
    FUN_03f5c2a4(&DAT_09190010);
    FUN_03f5c2a4(&DAT_09173528);
    DAT_09522622 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x6a8))(param_2,0x34,*(undefined8 *)(*param_2 + 0x6b0));
    if (*(int *)(DAT_09190010 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09190010);
    }
    puVar4 = *(undefined8 **)(DAT_09190010 + 0xb8);
    lVar7 = puVar4[5];
    if (lVar7 == 0) {
      if (*(int *)(DAT_09190010 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09190010);
        puVar4 = *(undefined8 **)(DAT_09190010 + 0xb8);
      }
      uVar8 = *puVar4;
      lVar7 = thunk_FUN_03f9944c(DAT_091785f8);
      FUN_05322d94(lVar7,uVar8,DAT_091e8d28,0);
      plVar2 = (long *)(*(long *)(DAT_09190010 + 0xb8) + 0x28);
      *plVar2 = lVar7;
      thunk_FUN_03f5d7b8(plVar2,lVar7);
    }
    plVar2 = (long *)FUN_04b0cafc(uVar1,lVar7,DAT_091cb418);
    if (plVar2 != (long *)0x0) {
      lVar7 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917a3d8) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076a2a40;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a3d8,0);
LAB_076a2a40:
      plVar2 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
      if (plVar2 != (long *)0x0) {
        lVar7 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076a2aa8;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_076a2aa8:
        uVar5 = (*(code *)*puVar4)(plVar2,puVar4[1]);
        uVar1 = DAT_09173528;
        if ((uVar5 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
          uVar5 = System_Type__op_Equality(param_2,uVar1,0);
          uVar1 = 0;
          if ((uVar5 & 1) != 0) {
            plVar2 = (long *)FUN_03f5c394(DAT_09180748,4);
            lVar7 = DAT_09535420;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_095354b8);
            }
            lVar7 = System_Type__GetTypeFromHandle(lVar7 + 0x20,0);
            if (plVar2 == (long *)0x0) goto LAB_076a2d44;
            if ((lVar7 != 0) &&
               (lVar3 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_076a2d4c:
              uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar1,0);
            }
            if ((int)plVar2[3] != 0) {
              plVar2[4] = lVar7;
              thunk_FUN_03f5d7b8(plVar2 + 4,lVar7);
              lVar7 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
              if ((lVar7 != 0) &&
                 (lVar3 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
              goto LAB_076a2d4c;
              if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
                plVar2[5] = lVar7;
                thunk_FUN_03f5d7b8(plVar2 + 5,lVar7);
                lVar7 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
                if ((lVar7 != 0) &&
                   (lVar3 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
                goto LAB_076a2d4c;
                if (2 < *(uint *)(plVar2 + 3)) {
                  plVar2[6] = lVar7;
                  thunk_FUN_03f5d7b8(plVar2 + 6,lVar7);
                  lVar7 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
                  if ((lVar7 != 0) &&
                     (lVar3 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)
                     ) goto LAB_076a2d4c;
                  if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
                    plVar2[7] = lVar7;
                    thunk_FUN_03f5d7b8(plVar2 + 7,lVar7);
                    uVar1 = System_Type__GetConstructor(param_2,plVar2,0);
                    return uVar1;
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
        else {
          lVar7 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917aa80) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_076a2cc0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917aa80,0);
LAB_076a2cc0:
          uVar1 = (*(code *)*puVar4)(plVar2,puVar4[1]);
          lVar7 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_076a2d1c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_076a2d1c:
          uVar5 = (*(code *)*puVar4)(plVar2,puVar4[1]);
          if ((uVar5 & 1) != 0) {
            thunk_FUN_03fc39d4(&DAT_09187348);
            uVar1 = thunk_FUN_03f9944c();
            uVar8 = thunk_FUN_03fc39d4(&DAT_09208280);
            Newtonsoft_Json_JsonException___ctor(uVar1,uVar8,0);
            uVar8 = thunk_FUN_03fc39d4(&DAT_091c82a8);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar1,uVar8);
          }
        }
        return uVar1;
      }
    }
  }
LAB_076a2d44:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

