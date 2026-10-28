// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaModelBuilder$$BuildNodeModel
// address: 0x76d1d40
// body: available
// range: 0x76d1d40-0x76d22e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d22c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d22c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d22c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d22cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d22d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d22d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d22d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d22dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d22e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d22e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Schema_JsonSchemaModelBuilder__BuildNodeModel(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_0952275b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fae8);
    FUN_03f5c2a4(&DAT_0919e828);
    FUN_03f5c2a4(&DAT_0919fad0);
    FUN_03f5c2a4(&DAT_0919e830);
    FUN_03f5c2a4(&DAT_09176b60);
    FUN_03f5c2a4(&DAT_091a67c8);
    FUN_03f5c2a4(&DAT_091a3650);
    FUN_03f5c2a4(&DAT_091a3658);
    FUN_03f5c2a4(&DAT_091a67d0);
    FUN_03f5c2a4(&DAT_091a67d8);
    FUN_03f5c2a4(&DAT_091a3660);
    FUN_03f5c2a4(&DAT_0917a0d8);
    FUN_03f5c2a4(&DAT_0917a1f0);
    FUN_03f5c2a4(&DAT_091a9870);
    FUN_03f5c2a4(&DAT_091a9878);
    FUN_03f5c2a4(&DAT_091ae090);
    FUN_03f5c2a4(&DAT_091ae068);
    FUN_03f5c2a4(&DAT_0917c5e0);
    DAT_0952275b = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_06fd9fbc(*(long *)(param_1 + 0x18),param_2,&local_68,DAT_0919e828);
    if ((uVar1 & 1) != 0) {
      return local_68;
    }
    if (param_2 != 0) {
      local_68 = Newtonsoft_Json_Schema_JsonSchemaModel__Create(*(undefined8 *)(param_2 + 0x18));
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_06fd8440(*(long *)(param_1 + 0x18),param_2,local_68,DAT_0919e830);
        if (*(long *)(param_2 + 0x20) != 0) {
          FUN_06fd8888(&local_d8,*(long *)(param_2 + 0x20),DAT_0919fae8);
          puStack_88 = puStack_d0;
          local_90 = local_d8;
          uStack_78 = uStack_c0;
          local_80 = local_c8;
          local_70 = local_b8;
          puStack_d0 = &local_90;
          local_d8 = 0;
          while (uVar1 = FUN_072753d4(&local_90,DAT_091a67d0), uVar3 = uStack_78, uVar5 = local_80,
                (uVar1 & 1) != 0) {
            if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar7 = (long *)(local_68 + 0x80);
            if (*plVar7 == 0) {
              lVar2 = thunk_FUN_03f9944c(DAT_09176b60);
              FUN_06fd76bc(lVar2,DAT_0919fad0);
              *plVar7 = lVar2;
              thunk_FUN_03f5d7b8(plVar7,lVar2);
              if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
            plVar7 = *(long **)(local_68 + 0x80);
            uVar3 = Newtonsoft_Json_Schema_JsonSchemaModelBuilder__BuildNodeModel(param_1,uVar3);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar2 = *plVar7;
            uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar1 != 0) {
              piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_0917a1f0) {
                  puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_076d1fd0;
                }
                uVar1 = uVar1 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar1 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a1f0,1);
LAB_076d1fd0:
            (*(code *)*puVar4)(plVar7,uVar5,uVar3,puVar4[1]);
          }
          FUN_072754f4(&local_90,DAT_091a67c8);
          if (*(long *)(param_2 + 0x28) != 0) {
            FUN_06fd8888(&local_d8,*(long *)(param_2 + 0x28),DAT_0919fae8);
            local_70 = local_b8;
            puStack_88 = puStack_d0;
            local_90 = local_d8;
            uStack_78 = uStack_c0;
            local_80 = local_c8;
            local_d8 = 0;
            puStack_d0 = &local_90;
            while (uVar1 = FUN_072753d4(&local_90,DAT_091a67d0), uVar3 = uStack_78, uVar5 = local_80
                  , (uVar1 & 1) != 0) {
              if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar7 = (long *)(local_68 + 0x88);
              if (*plVar7 == 0) {
                lVar2 = thunk_FUN_03f9944c(DAT_09176b60);
                FUN_06fd76bc(lVar2,DAT_0919fad0);
                *plVar7 = lVar2;
                thunk_FUN_03f5d7b8(plVar7,lVar2);
                if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              }
              plVar7 = *(long **)(local_68 + 0x88);
              uVar3 = Newtonsoft_Json_Schema_JsonSchemaModelBuilder__BuildNodeModel(param_1,uVar3);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar2 = *plVar7;
              uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar1 != 0) {
                piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == DAT_0917a1f0) {
                    puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                    goto LAB_076d20e8;
                  }
                  uVar1 = uVar1 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar1 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a1f0,1);
LAB_076d20e8:
              (*(code *)*puVar4)(plVar7,uVar5,uVar3,puVar4[1]);
            }
            FUN_072754f4(&local_90,DAT_091a67c8);
            if (*(long *)(param_2 + 0x30) != 0) {
              FUN_057e185c(&local_d8,*(long *)(param_2 + 0x30),DAT_091ae090);
              puStack_a8 = puStack_d0;
              local_b0 = local_d8;
              local_a0 = local_c8;
              puStack_d0 = &local_b0;
              local_d8 = 0;
              while (uVar1 = FUN_071bd28c(&local_b0,DAT_091a3658), uVar5 = local_a0,
                    (uVar1 & 1) != 0) {
                if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar7 = (long *)(local_68 + 0x78);
                if (*plVar7 == 0) {
                  lVar2 = thunk_FUN_03f9944c(DAT_0917c5e0);
                  FUN_057e0400(lVar2,DAT_091ae068);
                  *plVar7 = lVar2;
                  thunk_FUN_03f5d7b8(plVar7,lVar2);
                  if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                }
                plVar7 = *(long **)(local_68 + 0x78);
                uVar5 = Newtonsoft_Json_Schema_JsonSchemaModelBuilder__BuildNodeModel(param_1,uVar5)
                ;
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar2 = *plVar7;
                uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
                if (uVar1 != 0) {
                  piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == DAT_0917a0d8) {
                      puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                      goto LAB_076d2224;
                    }
                    uVar1 = uVar1 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar1 != 0);
                }
                puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a0d8,2);
LAB_076d2224:
                (*(code *)*puVar4)(plVar7,uVar5,puVar4[1]);
              }
              FUN_071bd288(&local_b0,DAT_091a3650);
              lVar2 = local_68;
              if (*(long *)(param_2 + 0x38) != 0) {
                uVar5 = Newtonsoft_Json_Schema_JsonSchemaModelBuilder__BuildNodeModel(param_1);
                if (lVar2 == 0) goto LAB_076d22e4;
                puVar4 = (undefined8 *)(lVar2 + 0x90);
                *puVar4 = uVar5;
                thunk_FUN_03f5d7b8(puVar4,uVar5);
              }
              lVar2 = local_68;
              if (*(long *)(param_2 + 0x40) != 0) {
                uVar5 = Newtonsoft_Json_Schema_JsonSchemaModelBuilder__BuildNodeModel(param_1);
                if (lVar2 == 0) goto LAB_076d22e4;
                puVar4 = (undefined8 *)(lVar2 + 0x98);
                *puVar4 = uVar5;
                thunk_FUN_03f5d7b8(puVar4,uVar5);
              }
              return local_68;
            }
          }
        }
      }
    }
  }
LAB_076d22e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

