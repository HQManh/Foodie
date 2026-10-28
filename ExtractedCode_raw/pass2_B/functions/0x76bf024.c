// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
// address: 0x76bf024
// body: available
// range: 0x76bf024-0x76bf417 inclusive
// range: 0x76bf580-0x76bf6a3 inclusive
// range: 0x76bf6ac-0x76bf6af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76bf414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bf698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bf69c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bf6a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bf6ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076bf614) */
/* WARNING: Removing unreachable block (ram,0x076bf6ac) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList
               (long param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_095226e2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091869b8);
    FUN_03f5c2a4(&DAT_091aeac8);
    FUN_03f5c2a4(&DAT_091aeaf8);
    FUN_03f5c2a4(&DAT_091aeb08);
    DAT_095226e2 = 1;
  }
  plVar2 = (long *)thunk_FUN_03f99350(param_3,DAT_091869b8);
  plVar4 = param_3;
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091869b8) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076bf138;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091869b8,0);
LAB_076bf138:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing
            (param_1,param_2,param_4,plVar4);
  lVar6 = DAT_091aeac8;
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    lVar7 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        plVar2 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar2 = (long)plVar4;
        thunk_FUN_03f5d7b8(plVar2,plVar4);
      }
      else {
        FUN_057e0c68(lVar5,plVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar8 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
                        (param_1,param_2,plVar4,param_4,param_5,param_6,param_7);
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x598))(param_2,*(undefined8 *)(*param_2 + 0x5a0));
        Newtonsoft_Json_JsonWriter__get_Top(param_2,0);
        if (param_3 != (long *)0x0) {
          lVar6 = *param_3;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b08) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_076bf26c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_09185b08,0);
LAB_076bf26c:
          plVar2 = (long *)(*(code *)*puVar3)(param_3,puVar3[1]);
          do {
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar2;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_076bf2ec;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_076bf2ec:
            uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            if ((uVar9 & 1) == 0) {
              plVar2 = (long *)thunk_FUN_03f99350(plVar2,DAT_09185a58);
              if (plVar2 == (long *)0x0) goto LAB_076bf604;
              lVar6 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 == 0) goto LAB_076bf5dc;
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto LAB_076bf5c4;
            }
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar2;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_076bf354;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,1);
LAB_076bf354:
            lVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = *(long *)(param_4 + 0x98);
            if (lVar5 == 0) {
              if (lVar6 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract
                                  (param_1,lVar6);
              }
            }
            uVar9 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference
                              (param_1,lVar6,0,lVar5,param_4,param_5);
            if ((uVar9 & 1) == 0) {
              uVar9 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
                                (param_1,param_2,lVar6,0,lVar5,param_4,param_5);
              if ((uVar9 & 1) != 0) {
                Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
                          (param_1,param_2,lVar6,lVar5,0,param_4,param_5);
              }
            }
            else {
              Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference
                        (param_1,param_2,lVar6);
            }
          } while( true );
        }
      }
    }
  }
  goto LAB_076bf6a0;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_076bf5c4:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076bf5f8;
    }
  }
LAB_076bf5dc:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_076bf5f8:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_076bf604:
  (**(code **)(*param_2 + 0x5a8))(param_2,*(undefined8 *)(*param_2 + 0x5b0));
  if ((uVar8 & 1) != 0) {
    (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
  }
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 != 0) {
    FUN_057e251c(lVar6,*(int *)(lVar6 + 0x18) + -1,DAT_091aeaf8);
    Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized
              (param_1,param_2,param_4,plVar4);
    return;
  }
LAB_076bf6a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

