// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
// address: 0x76bf998
// body: available
// range: 0x76bf998-0x76bff8b inclusive
// range: 0x76c0038-0x76c014f inclusive
// range: 0x76c0158-0x76c015b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c0144 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c0148 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c014c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c0158 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076c00d8) */
/* WARNING: Removing unreachable block (ram,0x076c0158) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary
               (long param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 local_6c [4];
  long *local_68;
  
  if ((DAT_095226ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185890);
    FUN_03f5c2a4(&DAT_09185a30);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091869c0);
    FUN_03f5c2a4(&DAT_091aeac8);
    FUN_03f5c2a4(&DAT_091aeaf8);
    FUN_03f5c2a4(&DAT_091aeb08);
    DAT_095226ea = 1;
  }
  local_68 = (long *)0x0;
  local_6c[0] = 0;
  plVar2 = (long *)thunk_FUN_03f99350(param_3,DAT_091869c0);
  plVar4 = param_3;
  if (plVar2 != (long *)0x0) {
    lVar7 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091869c0) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076bfacc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091869c0,0);
LAB_076bfacc:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing
            (param_1,param_2,param_4,plVar4);
  lVar7 = DAT_091aeac8;
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        plVar2 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar2 = (long)plVar4;
        thunk_FUN_03f5d7b8(plVar2,plVar4);
      }
      else {
        FUN_057e0c68(lVar5,plVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
        ;
      }
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart
                (param_1,param_2,plVar4,param_4,param_5,param_6,param_7);
      lVar7 = DAT_095353e8;
      if (param_4 != 0) {
        if (*(long *)(param_4 + 0x90) == 0) {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_076c014c;
          lVar5 = *(long *)(param_4 + 0xd0);
          plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x40);
          if (lVar5 == 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = System_Type__GetTypeFromHandle(lVar7 + 0x20,0);
          }
          if (plVar2 == (long *)0x0) goto LAB_076c014c;
          lVar7 = *plVar2;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185890) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_076bfc20;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185890,0);
LAB_076bfc20:
          uVar6 = (*(code *)*puVar3)(plVar2,lVar5,puVar3[1]);
          Newtonsoft_Json_Serialization_JsonContainerContract__set_ItemContract(param_4,uVar6,0);
        }
        lVar7 = DAT_095353e8;
        plVar2 = (long *)(param_4 + 0xd8);
        if (*plVar2 == 0) {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_076c014c;
          lVar5 = *(long *)(param_4 + 200);
          plVar11 = *(long **)(*(long *)(param_1 + 0x20) + 0x40);
          if (lVar5 == 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = System_Type__GetTypeFromHandle(lVar7 + 0x20,0);
          }
          if (plVar11 == (long *)0x0) goto LAB_076c014c;
          lVar7 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185890) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_076bfce4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185890,0);
LAB_076bfce4:
          lVar7 = (*(code *)*puVar3)(plVar11,lVar5,puVar3[1]);
          *plVar2 = lVar7;
          thunk_FUN_03f5d7b8(plVar2,lVar7);
        }
        if ((param_2 != (long *)0x0) &&
           (Newtonsoft_Json_JsonWriter__get_Top(param_2,0), param_3 != (long *)0x0)) {
          lVar7 = *param_3;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185a20) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 9) * 0x10 + 0x138);
                goto LAB_076bfd74;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_09185a20,9);
LAB_076bfd74:
          plVar11 = (long *)(*(code *)*puVar3)(param_3,puVar3[1]);
          do {
            local_68 = plVar11;
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_076bfdfc;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_076bfdfc:
            uVar9 = (*(code *)*puVar3)(plVar11,puVar3[1]);
            plVar11 = local_68;
            if ((uVar9 & 1) == 0) {
              plVar2 = (long *)thunk_FUN_03f99350(local_68,DAT_09185a58);
              if (plVar2 == (long *)0x0) goto LAB_076c00c8;
              lVar7 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 == 0) goto LAB_076c0094;
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              goto LAB_076c007c;
            }
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *local_68;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185a30) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_076bfe64;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a30,2);
LAB_076bfe64:
            auVar12 = (*(code *)*puVar3)(plVar11,puVar3[1]);
            lVar7 = auVar12._8_8_;
            uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName
                              (auVar12._0_8_,param_2,auVar12._0_8_,*plVar2,local_6c);
            lVar5 = *(long *)(param_4 + 0xc0);
            if (lVar5 != 0) {
              uVar6 = (**(code **)(lVar5 + 0x18))
                                (*(undefined8 *)(lVar5 + 0x40),uVar6,*(undefined8 *)(lVar5 + 0x28));
            }
            lVar5 = *(long *)(param_4 + 0x98);
            if (lVar5 == 0) {
              if (lVar7 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract
                                  (param_1,lVar7);
              }
            }
            uVar9 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference
                              (param_1,lVar7,0,lVar5,param_4,param_5);
            if ((uVar9 & 1) == 0) {
              uVar9 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
                                (param_1,param_2,lVar7,0,lVar5,param_4,param_5);
              plVar11 = local_68;
              if ((uVar9 & 1) != 0) {
                (**(code **)(*param_2 + 0x5e8))
                          (param_2,uVar6,local_6c[0],*(undefined8 *)(*param_2 + 0x5f0));
                Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
                          (param_1,param_2,lVar7,lVar5,0,param_4,param_5);
                plVar11 = local_68;
              }
            }
            else {
              (**(code **)(*param_2 + 0x5e8))
                        (param_2,uVar6,local_6c[0],*(undefined8 *)(*param_2 + 0x5f0));
              Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference
                        (param_1,param_2,lVar7);
              plVar11 = local_68;
            }
          } while( true );
        }
      }
    }
  }
  goto LAB_076c014c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_076c007c:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076c00bc;
    }
  }
LAB_076c0094:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_076c00bc:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_076c00c8:
  (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
  lVar7 = *(long *)(param_1 + 0x48);
  if (lVar7 != 0) {
    FUN_057e251c(lVar7,*(int *)(lVar7 + 0x18) + -1,DAT_091aeaf8);
    Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized
              (param_1,param_2,param_4,plVar4);
    return;
  }
LAB_076c014c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

