// rea decompile_all
// name: AppLovinMax.ThirdParty.MiniJson.Json.Serializer$$SerializeObject
// address: 0x737dc5c
// body: available
// range: 0x737dc5c-0x737e10f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737e0e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e0e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e0ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e0f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e0f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e0f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e0fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e100 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737e10c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0737e108) */

void AppLovinMax_ThirdParty_MiniJson_Json_Serializer__SerializeObject(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  bool bVar8;
  
  if ((DAT_095209de & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_095209de = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),0x7b,0);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (*(char *)(param_1 + 0x18) != '\0') {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0737e104;
      System_Text_StringBuilder__AppendLine(*(long *)(param_1 + 0x10),0);
    }
    if (param_2 != (long *)0x0) {
      lVar5 = *param_2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185a20) {
            puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0737dd54;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185a20,2);
LAB_0737dd54:
      plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
      if (plVar2 != (long *)0x0) {
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185b08) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0737ddbc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b08,0);
LAB_0737ddbc:
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
                goto LAB_0737de44;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0737de44:
          uVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
          if ((uVar6 & 1) == 0) {
            plVar2 = (long *)thunk_FUN_03f99350(plVar2,DAT_09185a58);
            if (plVar2 == (long *)0x0) goto LAB_0737e060;
            lVar5 = *plVar2;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 == 0) goto LAB_0737e038;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_0737e020;
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
                goto LAB_0737deac;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,1);
LAB_0737deac:
          plVar3 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
          if (bVar8) {
LAB_0737deec:
            if (*(char *)(param_1 + 0x18) != '\0') {
              lVar5 = *(long *)(param_1 + 0x10);
              uVar4 = System_String__CreateString(0,0x20,*(int *)(param_1 + 0x1c) << 2,0);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550(uVar4,uVar4);
              }
              System_Text_StringBuilder__Append(lVar5,uVar4,0);
            }
          }
          else {
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),0x2c,0);
            if (*(char *)(param_1 + 0x18) != '\0') {
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              System_Text_StringBuilder__AppendLine(*(long *)(param_1 + 0x10),0);
              goto LAB_0737deec;
            }
          }
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          AppLovinMax_ThirdParty_MiniJson_Json_Serializer__SerializeString(param_1,uVar4);
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),0x3a,0);
          if (*(char *)(param_1 + 0x18) != '\0') {
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),0x20,0);
          }
          lVar5 = *param_2;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185a20) {
                puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0737dfc0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185a20,0);
LAB_0737dfc0:
          uVar4 = (*(code *)*puVar1)(param_2,plVar3,puVar1[1]);
          AppLovinMax_ThirdParty_MiniJson_Json_Serializer__SerializeValue(param_1,uVar4);
          bVar8 = false;
        } while( true );
      }
    }
  }
  goto LAB_0737e104;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0737e020:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0737e054;
    }
  }
LAB_0737e038:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_0737e054:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
LAB_0737e060:
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0737e104;
    System_Text_StringBuilder__AppendLine(*(long *)(param_1 + 0x10),0);
    lVar5 = *(long *)(param_1 + 0x10);
    uVar4 = System_String__CreateString(0,0x20,*(int *)(param_1 + 0x1c) << 2,0);
    if (lVar5 == 0) goto LAB_0737e104;
    System_Text_StringBuilder__Append(lVar5,uVar4,0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),0x7d,0);
    return;
  }
LAB_0737e104:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

