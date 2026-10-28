// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PayJob
// address: 0x444af74
// body: available
// range: 0x444af74-0x444b2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444b2d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444b2dc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__PayJob(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  
  if ((DAT_09518008 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c198);
    FUN_03f5c2a4(&DAT_0919c1a0);
    FUN_03f5c2a4(&DAT_0919e478);
    FUN_03f5c2a4(&DAT_091c9c00);
    FUN_03f5c2a4(&DAT_091ca970);
    FUN_03f5c2a4(&DAT_091cab20);
    FUN_03f5c2a4(&DAT_091cace0);
    FUN_03f5c2a4(&DAT_09178278);
    FUN_03f5c2a4(&DAT_09178280);
    FUN_03f5c2a4(&DAT_09178b50);
    FUN_03f5c2a4(&DAT_091e7ea0);
    FUN_03f5c2a4(&DAT_091e7ea8);
    FUN_03f5c2a4(&DAT_091e7eb0);
    FUN_03f5c2a4(&DAT_0918f5b0);
    DAT_09518008 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f5b0);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass50_0___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
    if (*(long *)(param_1 + 0xb0) != 0) {
      uVar3 = FUN_06e4da10(*(long *)(param_1 + 0xb0),param_2,lVar2 + 0x18,DAT_0919c1a0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(lVar2 + 0x18) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x48);
        uVar4 = thunk_FUN_03f9944c(DAT_09178b50);
        FUN_0531612c(uVar4,lVar2,DAT_091e7ea0,0);
        uVar4 = FUN_04afa710(uVar8,uVar4,DAT_091ca970);
        lVar5 = FUN_04b03fcc(uVar4,DAT_091cace0);
        uVar4 = thunk_FUN_03f9944c(DAT_09178278);
        FUN_0530c42c(uVar4,lVar2,DAT_091e7ea8,0);
        FUN_04ae55c8(&local_70,lVar5,uVar4,DAT_091c9c00);
        lVar6 = lStack_68;
        if (lStack_68 == 0) {
          return;
        }
        lVar9 = *(long *)(param_1 + 0xd0);
        iVar1 = CookingGraph_CookingLevelSimulation__Debt(param_1,lStack_68);
        if (lVar9 != 0) {
          FUN_06f4c418(lVar9,lVar6,iVar1 + 1,DAT_0919e478);
          uVar4 = thunk_FUN_03f9944c(DAT_09178280);
          FUN_0530c6ac(uVar4,lVar2,DAT_091e7eb0,0);
          iVar1 = FUN_04b0252c(lVar5,uVar4,DAT_091cab20);
          lVar6 = *(long *)(lVar2 + 0x18);
          if (((lVar6 != 0) && (*(long *)(param_1 + 0x78) != 0)) &&
             (lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x70), lVar9 != 0)) {
            if (*(uint *)(lVar9 + 0x18) <= *(uint *)(lVar6 + 0x1c)) {
LAB_0444b2dc:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (iVar1 < *(int *)(lVar9 + (long)(int)*(uint *)(lVar6 + 0x1c) * 4 + 0x20) *
                        *(int *)(lVar6 + 0x20)) {
              return;
            }
            if (lVar5 != 0) {
              if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
                uVar3 = 0;
                uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                puVar10 = (undefined8 *)(lVar5 + 0x28);
                do {
                  if (uVar7 <= uVar3) goto LAB_0444b2dc;
                  if (*(long *)(lVar2 + 0x18) == 0) goto LAB_0444b2d8;
                  uVar4 = *puVar10;
                  lVar6 = *(long *)(param_1 + 0x178);
                  CookingGraph_CookingLevelSimulation__ToolAddress
                            (&local_70,*(undefined4 *)(*(long *)(lVar2 + 0x18) + 0x10),
                             *(undefined4 *)(puVar10 + -1));
                  if (lVar6 == 0) goto LAB_0444b2d8;
                  lStack_88 = lStack_68;
                  local_90 = local_70;
                  local_80 = local_60;
                  CookingGraph_Execution_CookingExecution__Consume(lVar6,&local_90,uVar4,0);
                  CookingGraph_CookingLevelSimulation__ForgetUnit(param_1,uVar4);
                  uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                  uVar3 = uVar3 + 1;
                  puVar10 = puVar10 + 4;
                } while ((long)uVar3 < (long)(int)*(uint *)(lVar5 + 0x18));
              }
              if (*(long *)(param_1 + 0xb0) != 0) {
                FUN_06e4d3e8(*(long *)(param_1 + 0xb0),param_2,DAT_0919c198);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0444b2d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

