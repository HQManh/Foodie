// rea decompile_all
// name: Utilities.DraggableGroupLayerControl$$Start
// address: 0x450ffec
// body: available
// range: 0x450ffec-0x45101f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45101ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45101f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableGroupLayerControl__Start(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  
  if ((DAT_0951852a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174740);
    FUN_03f5c2a4(&DAT_091c87b8);
    FUN_03f5c2a4(&DAT_091c87c0);
    FUN_03f5c2a4(&DAT_091cd950);
    FUN_03f5c2a4(&DAT_09185a70);
    DAT_0951852a = 1;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar2 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_045101ec;
        plVar3 = (long *)FUN_04b7c324(lVar2,DAT_091cd950);
        if (plVar3 != (long *)0x0) {
          uVar4 = thunk_FUN_03f9944c(DAT_09174740);
          FUN_070a8c30(uVar4,param_1,DAT_091c87b8,0);
          lVar2 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185a70) {
                puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_04510124;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a70,0);
LAB_04510124:
          (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
          uVar4 = thunk_FUN_03f9944c(DAT_09174740);
          FUN_070a8c30(uVar4,param_1,DAT_091c87c0,0);
          lVar2 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185a70) {
                puVar5 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_045101a0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a70,2);
LAB_045101a0:
          (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x2c);
    return;
  }
LAB_045101ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

