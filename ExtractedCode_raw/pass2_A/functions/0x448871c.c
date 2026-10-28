// rea decompile_all
// name: CookingGraph.CookingGraphIndex.<>c__DisplayClass29_0$$<Collapse>b__1
// address: 0x448871c
// body: available
// range: 0x448871c-0x448896b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4488964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4488968 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingGraphIndex_<>c__DisplayClass29_0__<Collapse>b__1
          (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long local_68;
  
  if ((DAT_095180f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182c98);
    FUN_03f5c2a4(&DAT_0919d5d0);
    FUN_03f5c2a4(&DAT_091ca578);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_091e7410);
    FUN_03f5c2a4(&DAT_091e7450);
    FUN_03f5c2a4(&DAT_0918f260);
    DAT_095180f9 = 1;
  }
  local_68 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918f260);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_1);
    lVar4 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(lVar3 + 0x10) = param_2;
    if (lVar4 != 0) {
      plVar8 = &local_68;
      uVar5 = FUN_06ef1fe8(lVar4,param_2,&local_68,DAT_0919d5d0);
      if ((uVar5 & 1) == 0) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == 0) goto LAB_04488964;
        if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar3 + 0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar8 = (long *)(lVar4 + (long)(int)*(uint *)(lVar3 + 0x10) * 8 + 0x20);
      }
      lVar4 = *plVar8;
      if (lVar4 != 0) {
        uVar11 = *(undefined8 *)(lVar4 + 0x20);
        uVar9 = *(undefined8 *)(lVar4 + 0x28);
        uVar1 = *(undefined4 *)(lVar4 + 0x10);
        uVar2 = *(undefined4 *)(lVar4 + 0x14);
        lVar10 = *(long *)(param_1 + 0x58);
        if (lVar10 == 0) {
          lVar10 = thunk_FUN_03f9944c(DAT_09178bd0);
          FUN_05315cf4(lVar10,param_1,DAT_091e7410,0);
          *(long *)(param_1 + 0x58) = lVar10;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x58),lVar10);
        }
        uVar9 = FUN_04af2d4c(uVar9,lVar10,DAT_091ca578);
        uVar6 = thunk_FUN_03f9944c(DAT_09178b98);
        FUN_05315754(uVar6,lVar3,DAT_091e7450,0);
        uVar9 = FUN_04b0c1f0(uVar9,uVar6,DAT_091cb4e8);
        uVar7 = *(undefined8 *)(lVar4 + 0x18);
        uVar6 = thunk_FUN_03f9944c(DAT_09182c98);
        CookingGraph_Execution_CookingAssemblySlot___ctor(uVar11,uVar6,uVar1,uVar2,uVar9,uVar7,0);
        return uVar6;
      }
    }
  }
LAB_04488964:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

