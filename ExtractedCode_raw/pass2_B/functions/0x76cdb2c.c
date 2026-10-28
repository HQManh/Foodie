// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaBuilder$$ProcessItems
// address: 0x76cdb2c
// body: available
// range: 0x76cdb2c-0x76cdff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76cdf20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cdf24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cdf28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cdf2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cdf30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cdfe8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cdff0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076cdfec) */

void Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessItems(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 local_58;
  long **pplStack_50;
  long *local_48;
  
  if ((DAT_0952273f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a0d0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ae060);
    FUN_03f5c2a4(&DAT_0917c5d8);
    DAT_0952273f = 1;
  }
  lVar9 = *(long *)(param_1 + 0x28);
  local_48 = (long *)0x0;
  uVar3 = thunk_FUN_03f9944c(DAT_0917c5d8);
  FUN_057e0400(uVar3,DAT_091ae060);
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)(lVar9 + 0x98);
    *puVar10 = uVar3;
    thunk_FUN_03f5d7b8(puVar10,uVar3);
    if (param_2 != (long *)0x0) {
      iVar1 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
      if (iVar1 == 2) {
        if (*(long *)(param_1 + 0x28) != 0) {
          *(undefined1 *)(*(long *)(param_1 + 0x28) + 0xa0) = 1;
          lVar9 = *param_2;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917a5d0) {
                puVar10 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_076cdce4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a5d0,0);
LAB_076cdce4:
          local_48 = (long *)(*(code *)*puVar10)(param_2,puVar10[1]);
          pplStack_50 = &local_48;
          local_58 = 0;
          do {
            plVar11 = local_48;
            if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *local_48;
            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                  puVar10 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_076cdd68;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185b10,0);
LAB_076cdd68:
            uVar7 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            plVar11 = local_48;
            if ((uVar7 & 1) == 0) {
              if (local_48 == (long *)0x0) {
                return;
              }
              lVar9 = *local_48;
              uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar7 == 0) goto LAB_076cdea8;
              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_076cde90;
            }
            if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *local_48;
            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_0917ac98) {
                  puVar10 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_076cddcc;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(local_48,DAT_0917ac98,0);
LAB_076cddcc:
            uVar3 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550(uVar3,uVar3);
            }
            plVar11 = *(long **)(*(long *)(param_1 + 0x28) + 0x98);
            uVar3 = Newtonsoft_Json_Schema_JsonSchemaBuilder__BuildSchema(param_1);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *plVar11;
            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_0917a0d0) {
                  puVar10 = (undefined8 *)(lVar9 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_076cde48;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a0d0,2);
LAB_076cde48:
            (*(code *)*puVar10)(plVar11,uVar3,puVar10[1]);
          } while( true );
        }
      }
      else {
        if (iVar1 != 1) {
          FUN_039b1d98(param_2);
          uVar3 = Newtonsoft_Json_Linq_JToken__get_Path(param_2,0);
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          FUN_039b1d98(param_2);
          uVar2 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
          local_58 = CONCAT44(local_58._4_4_,uVar2);
          uVar5 = thunk_FUN_03fc39d4(&DAT_09187268);
          uVar5 = FUN_03f5c42c(uVar5,&local_58);
          uVar6 = thunk_FUN_03fc39d4(&DAT_09201e10);
          uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar4,uVar5,0);
          uVar3 = Newtonsoft_Json_JsonException__Create(param_2,uVar3,uVar4,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091d19e0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,uVar4);
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          plVar11 = *(long **)(*(long *)(param_1 + 0x28) + 0x98);
          uVar3 = Newtonsoft_Json_Schema_JsonSchemaBuilder__BuildSchema(param_1,param_2);
          if (plVar11 != (long *)0x0) {
            lVar9 = *plVar11;
            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_0917a0d0) {
                  puVar10 = (undefined8 *)(lVar9 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_076cdec8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a0d0,2);
LAB_076cdec8:
            (*(code *)*puVar10)(plVar11,uVar3,puVar10[1]);
            if (*(long *)(param_1 + 0x28) != 0) {
              *(undefined1 *)(*(long *)(param_1 + 0x28) + 0xa0) = 0;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076cde90:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cdef4;
    }
  }
LAB_076cdea8:
  puVar10 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185a58,0);
LAB_076cdef4:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
  return;
}

