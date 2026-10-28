// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaWriter$$WriteType
// address: 0x76d3568
// body: available
// range: 0x76d3568-0x76d3a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d3a90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Schema_JsonSchemaWriter__WriteType
               (undefined8 param_1,undefined8 param_2,long *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  uint local_44;
  
  if ((DAT_0952276a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9210);
    FUN_03f5c2a4(&DAT_091840e8);
    FUN_03f5c2a4(&DAT_091cb500);
    FUN_03f5c2a4(&DAT_09178ca0);
    FUN_03f5c2a4(&DAT_0917a5e8);
    FUN_03f5c2a4(&DAT_0917acb8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091721a8);
    FUN_03f5c2a4(&DAT_09187408);
    FUN_03f5c2a4(&DAT_091ec028);
    FUN_03f5c2a4(&DAT_09191fe8);
    DAT_0952276a = 1;
  }
  uVar1 = DAT_091721a8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
  local_44 = param_4;
  uVar2 = FUN_03f5c42c(DAT_09187408,&local_44);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  uVar3 = System_Enum__IsDefined(uVar1,uVar2,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = FUN_04ab0de4(param_4,DAT_091c9210);
    if (*(int *)(DAT_09191fe8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09191fe8);
    }
    puVar5 = *(undefined8 **)(DAT_09191fe8 + 0xb8);
    lVar7 = puVar5[1];
    if (lVar7 == 0) {
      if (*(int *)(DAT_09191fe8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09191fe8);
        puVar5 = *(undefined8 **)(DAT_09191fe8 + 0xb8);
      }
      uVar2 = *puVar5;
      lVar7 = thunk_FUN_03f9944c(DAT_09178ca0);
      FUN_05316834(lVar7,uVar2,DAT_091ec028,0);
      plVar4 = (long *)(*(long *)(DAT_09191fe8 + 0xb8) + 8);
      *plVar4 = lVar7;
      thunk_FUN_03f5d7b8(plVar4,lVar7);
    }
    plVar4 = (long *)FUN_04b0c4f4(uVar1,lVar7,DAT_091cb500);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917a5e8) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076d3804;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a5e8,0);
LAB_076d3804:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185b10) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076d386c;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_076d386c:
        uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (param_3 != (long *)0x0) {
          (**(code **)(*param_3 + 0x5d8))(param_3,param_2,*(undefined8 *)(*param_3 + 0x5e0));
          lVar7 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917acb8) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_076d38ec;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917acb8,0);
LAB_076d38ec:
          param_4 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          lVar7 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_076d3948;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_076d3948:
          uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar3 & 1) != 0) {
            (**(code **)(*param_3 + 0x598))(param_3,*(undefined8 *)(*param_3 + 0x5a0));
            uVar1 = Newtonsoft_Json_Schema_JsonSchemaBuilder__MapType(param_4);
            (**(code **)(*param_3 + 0x698))(param_3,uVar1,*(undefined8 *)(*param_3 + 0x6a0));
            do {
              lVar7 = *plVar4;
              uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == DAT_0917acb8) {
                    puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_076d39d8;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917acb8,0);
LAB_076d39d8:
              (*(code *)*puVar5)(plVar4,puVar5[1]);
              uVar1 = Newtonsoft_Json_Schema_JsonSchemaBuilder__MapType();
              (**(code **)(*param_3 + 0x698))(param_3,uVar1,*(undefined8 *)(*param_3 + 0x6a0));
              lVar7 = *plVar4;
              uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                    puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_076d3a4c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_076d3a4c:
              uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
              if ((uVar3 & 1) == 0) {
                (**(code **)(*param_3 + 0x5a8))(param_3,*(undefined8 *)(*param_3 + 0x5b0));
                return;
              }
            } while( true );
          }
          goto LAB_076d36b8;
        }
      }
    }
  }
  else if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x5d8))(param_3,param_2,*(undefined8 *)(*param_3 + 0x5e0));
LAB_076d36b8:
    uVar1 = Newtonsoft_Json_Schema_JsonSchemaBuilder__MapType(param_4);
    (**(code **)(*param_3 + 0x698))(param_3,uVar1,*(undefined8 *)(*param_3 + 0x6a0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

