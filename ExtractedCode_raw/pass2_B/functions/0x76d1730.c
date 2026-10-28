// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaModelBuilder$$AddSchema
// address: 0x76d1730
// body: available
// range: 0x76d1730-0x76d1c63 inclusive
// range: 0x76d1c94-0x76d1d27 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d1938 to 0x561bec0 FUN_0561bec0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76d1ab4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d1c4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d1c50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d1c54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d1c60 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d1d24 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076d1d24) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long Newtonsoft_Json_Schema_JsonSchemaModelBuilder__AddSchema
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  
  if ((DAT_09522757 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b4e8);
    FUN_03f5c2a4(&DAT_091cb340);
    FUN_03f5c2a4(&DAT_0917a0d0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5d8);
    FUN_03f5c2a4(&DAT_0917aca8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b0c0);
    FUN_03f5c2a4(&DAT_091873f0);
    FUN_03f5c2a4(&DAT_09180210);
    FUN_03f5c2a4(&DAT_091a9bc8);
    FUN_03f5c2a4(&DAT_091a9bd0);
    FUN_03f5c2a4(&DAT_091b9570);
    DAT_09522757 = 1;
  }
  if (param_2 == 0) {
    plVar3 = (long *)FUN_03f5c394(DAT_09180210,1);
    if (plVar3 == (long *)0x0) goto LAB_076d1ab4;
    if ((param_3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_076d1c58:
      uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,0);
    }
    if ((int)plVar3[3] == 0) {
LAB_076d1c54:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar3[4] = param_3;
    thunk_FUN_03f5d7b8(plVar3 + 4,param_3);
  }
  else {
    if (*(long *)(param_2 + 0x18) == 0) goto LAB_076d1ab4;
    uVar2 = FUN_05f078e0(*(long *)(param_2 + 0x18),param_3,DAT_091b9570);
    if ((uVar2 & 1) != 0) {
      return param_2;
    }
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    plVar3 = (long *)FUN_03f5c394(DAT_09180210,1);
    if (plVar3 == (long *)0x0) goto LAB_076d1ab4;
    if ((param_3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_076d1c58;
    if ((int)plVar3[3] == 0) goto LAB_076d1c54;
    plVar3[4] = param_3;
    thunk_FUN_03f5d7b8(plVar3 + 4,param_3);
    plVar3 = (long *)FUN_04b08ea4(uVar9,plVar3,DAT_091cb340);
  }
  uVar9 = Newtonsoft_Json_Schema_JsonSchemaNode__GetId(plVar3);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_0561bf68(*(long *)(param_1 + 0x10),uVar9,DAT_091a9bc8);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) {
        lVar4 = thunk_FUN_03f9944c(DAT_091873f0);
        Newtonsoft_Json_Schema_JsonSchemaNode___ctor(lVar4,param_3);
      }
      else {
        lVar4 = Newtonsoft_Json_Schema_JsonSchemaNode__Combine(param_2,param_3);
      }
      if (((*(long *)(param_1 + 0x10) != 0) &&
          (FUN_06c77664(*(long *)(param_1 + 0x10),lVar4,DAT_0919b4e8), param_3 != 0)) &&
         (lVar4 != 0)) {
        Newtonsoft_Json_Schema_JsonSchemaModelBuilder__AddProperties
                  (param_1,*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(lVar4 + 0x20));
        Newtonsoft_Json_Schema_JsonSchemaModelBuilder__AddProperties
                  (param_1,*(undefined8 *)(param_3 + 200),*(undefined8 *)(lVar4 + 0x28));
        plVar3 = *(long **)(param_3 + 0x98);
        if (plVar3 == (long *)0x0) {
LAB_076d1ab8:
          if (*(long *)(param_3 + 0xa8) != 0) {
            Newtonsoft_Json_Schema_JsonSchemaModelBuilder__AddAdditionalItems(param_1,lVar4);
          }
          if (*(long *)(param_3 + 0xc0) != 0) {
            Newtonsoft_Json_Schema_JsonSchemaModelBuilder__AddAdditionalProperties(param_1,lVar4);
          }
          plVar3 = *(long **)(param_3 + 0xf8);
          if (plVar3 == (long *)0x0) {
            return lVar4;
          }
          lVar6 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a5d8) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076d1b44;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a5d8,0);
LAB_076d1b44:
          plVar3 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
          do {
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076d1bc4;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar2 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_076d1bc4:
            uVar2 = (*(code *)*puVar5)(plVar3,puVar5[1]);
            if ((uVar2 & 1) == 0) {
              if (plVar3 == (long *)0x0) {
                return lVar4;
              }
              lVar6 = *plVar3;
              uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar2 == 0) goto LAB_076d1cd8;
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto LAB_076d1cc0;
            }
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917aca8) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076d1c28;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar2 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917aca8,0);
LAB_076d1c28:
            uVar9 = (*(code *)*puVar5)(plVar3,puVar5[1]);
            lVar4 = Newtonsoft_Json_Schema_JsonSchemaModelBuilder__AddSchema(param_1,lVar4,uVar9);
          } while( true );
        }
        iVar8 = 0;
        do {
          lVar6 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a0d0) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076d1a1c;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a0d0,0);
LAB_076d1a1c:
          iVar1 = (*(code *)*puVar5)(plVar3,puVar5[1]);
          if (iVar1 <= iVar8) goto LAB_076d1ab8;
          plVar3 = *(long **)(param_3 + 0x98);
          if (plVar3 == (long *)0x0) break;
          lVar6 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917b0c0) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076d1a84;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b0c0,0);
LAB_076d1a84:
          uVar9 = (*(code *)*puVar5)(plVar3,iVar8,puVar5[1]);
          Newtonsoft_Json_Schema_JsonSchemaModelBuilder__AddItem(param_1,lVar4,iVar8,uVar9);
          plVar3 = *(long **)(param_3 + 0x98);
          iVar8 = iVar8 + 1;
        } while (plVar3 != (long *)0x0);
      }
    }
    else if (*(long *)(param_1 + 0x10) != 0) {
      lVar4 = FUN_0561bec0(*(long *)(param_1 + 0x10),uVar9,DAT_091a9bd0);
      return lVar4;
    }
  }
LAB_076d1ab4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_076d1cc0:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076d1cf4;
    }
  }
LAB_076d1cd8:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_076d1cf4:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
  return lVar4;
}

