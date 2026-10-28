// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaWriter$$WriteItems
// address: 0x76d3dd0
// body: available
// range: 0x76d3dd0-0x76d41ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d41e8 to 0x76d3420 Newtonsoft.Json.Schema.JsonSchemaWriter$$ReferenceOrWriteSchema (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76d41ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d41f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d41f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d41fc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076d40d4) */
/* WARNING: Removing unreachable block (ram,0x076d41f8) */

void Newtonsoft_Json_Schema_JsonSchemaWriter__WriteItems(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_09522769 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a0d0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5d8);
    FUN_03f5c2a4(&DAT_0917aca8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b0c0);
    FUN_03f5c2a4(&DAT_0921dcf0);
    DAT_09522769 = 1;
  }
  if (param_2 == 0) goto LAB_076d41f4;
  if ((*(long *)(param_2 + 0x98) == 0) && (*(char *)(param_2 + 0xa0) == '\0')) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) goto LAB_076d41f4;
  (**(code **)(*plVar2 + 0x5d8))(plVar2,DAT_0921dcf0,*(undefined8 *)(*plVar2 + 0x5e0));
  if (*(char *)(param_2 + 0xa0) == '\0') {
    plVar2 = *(long **)(param_2 + 0x98);
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a0d0) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076d4110;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a0d0,0);
LAB_076d4110:
      iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (0 < iVar1) {
        plVar2 = *(long **)(param_2 + 0x98);
        if (plVar2 != (long *)0x0) {
          lVar5 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917b0c0) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076d41c0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0c0,0);
LAB_076d41c0:
          uVar4 = (*(code *)*puVar3)(plVar2,0,puVar3[1]);
          Newtonsoft_Json_Schema_JsonSchemaWriter__ReferenceOrWriteSchema(param_1,uVar4);
          return;
        }
        goto LAB_076d41f4;
      }
    }
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x578))(plVar2,*(undefined8 *)(*plVar2 + 0x580));
      plVar2 = *(long **)(param_1 + 0x10);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x076d41b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x588))(plVar2,*(undefined8 *)(*plVar2 + 0x590));
        return;
      }
    }
    goto LAB_076d41f4;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) goto LAB_076d41f4;
  (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0));
  plVar2 = *(long **)(param_2 + 0x98);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a5d8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076d3f58;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a5d8,0);
LAB_076d3f58:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
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
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076d3fd4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_076d3fd4:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar2 == (long *)0x0) break;
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_076d40a0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_076d4088;
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
          if (*(long *)(piVar7 + -2) == DAT_0917aca8) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076d4038;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917aca8,0);
LAB_076d4038:
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      Newtonsoft_Json_Schema_JsonSchemaWriter__ReferenceOrWriteSchema(param_1,uVar4);
    } while( true );
  }
  goto LAB_076d40d8;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076d4088:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076d40bc;
    }
  }
LAB_076d40a0:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_076d40bc:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_076d40d8:
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x5a8))(plVar2,*(undefined8 *)(*plVar2 + 0x5b0));
    return;
  }
LAB_076d41f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

