// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaGenerator$$Pop
// address: 0x76cf210
// body: available
// range: 0x76cf210-0x76cf43f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76cf43c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Schema_JsonSchemaGenerator__Pop(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_09522747 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9ec8);
    FUN_03f5c2a4(&DAT_0917a1a0);
    FUN_03f5c2a4(&DAT_0917b150);
    DAT_09522747 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x28);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a1a0) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cf2bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a1a0,0);
LAB_076cf2bc:
    iVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b150) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076cf318;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b150,0);
LAB_076cf318:
    uVar3 = (*(code *)*puVar2)(plVar8,iVar1 + -1,puVar2[1]);
    plVar8 = *(long **)(param_1 + 0x28);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a1a0) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076cf380;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a1a0,0);
LAB_076cf380:
      iVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b150) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_076cf3e8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b150,4);
LAB_076cf3e8:
      (*(code *)*puVar2)(plVar8,iVar1 + -1,puVar2[1]);
      lVar5 = FUN_04ae8ca0(*(undefined8 *)(param_1 + 0x28),DAT_091c9ec8);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar5 + 0x18);
        *(undefined8 *)(param_1 + 0x30) = uVar4;
      }
      thunk_FUN_03f5d7b8(param_1 + 0x30,uVar4);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

