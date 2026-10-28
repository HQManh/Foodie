// rea decompile_all
// name: AFMiniJSON.Json.Serializer$$SerializeObject
// address: 0x405565c
// body: available
// range: 0x405565c-0x4055a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4055a10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4055a14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4055a18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4055a1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4055a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4055a24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4055a2c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040559e0) */
/* WARNING: Removing unreachable block (ram,0x04055a28) */

void AFMiniJSON_Json_Serializer__SerializeObject(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  bool bVar8;
  
  if ((DAT_09515b39 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09515b39 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),0x7b,0), param_2 != (long *)0x0))
  {
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185a20) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_04055730;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185a20,2);
LAB_04055730:
    plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185b08) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04055798;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b08,0);
LAB_04055798:
      plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
      bVar8 = true;
      do {
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185b10) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04055820;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_04055820:
        uVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
        if ((uVar6 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_03f99350(plVar2,DAT_09185a58);
          if (plVar2 == (long *)0x0) goto LAB_040559d4;
          lVar5 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_040559ac;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_04055994;
        }
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185b10) {
              puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_04055888;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,1);
LAB_04055888:
        plVar3 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
        if (!bVar8) {
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),0x2c,0);
        }
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        AFMiniJSON_Json_Serializer__SerializeString(param_1,uVar4);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),0x3a,0);
        lVar5 = *param_2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185a20) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04055930;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185a20,0);
LAB_04055930:
        uVar4 = (*(code *)*puVar1)(param_2,plVar3,puVar1[1]);
        AFMiniJSON_Json_Serializer__SerializeValue(param_1,uVar4);
        bVar8 = false;
      } while( true );
    }
  }
  goto LAB_04055a24;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_04055994:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_040559c8;
    }
  }
LAB_040559ac:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_040559c8:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
LAB_040559d4:
  if (*(long *)(param_1 + 0x10) != 0) {
    System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),0x7d,0);
    return;
  }
LAB_04055a24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

