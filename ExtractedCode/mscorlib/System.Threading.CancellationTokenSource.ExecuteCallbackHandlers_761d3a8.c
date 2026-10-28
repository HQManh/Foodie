// rea decompile_all
// name: System.Threading.CancellationTokenSource$$ExecuteCallbackHandlers
// address: 0x761d3a8
// body: available
// range: 0x761d3a8-0x761d5e7 inclusive
// range: 0x761d6b4-0x761d7c7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761d5e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761d714 to 0x7627ba0 System.Threading.Interlocked$$Exchange (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x761d784 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761d78c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761d7c4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0761d758) */
/* WARNING: Removing unreachable block (ram,0x0761d788) */
/* WARNING: Removing unreachable block (ram,0x0761d790) */

void System_Threading_CancellationTokenSource__ExecuteCallbackHandlers(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long local_90;
  undefined8 uStack_88;
  undefined4 local_78;
  long local_70;
  undefined8 uStack_68;
  
  if ((DAT_09522107 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182330);
    FUN_03f5c2a4(&DAT_091c48a0);
    FUN_03f5c2a4(&DAT_0918a860);
    FUN_03f5c2a4(&DAT_091bae38);
    FUN_03f5c2a4(&DAT_091bae40);
    FUN_03f5c2a4(&DAT_091bae48);
    FUN_03f5c2a4(&DAT_091bae60);
    FUN_03f5c2a4(&DAT_0918eb00);
    DAT_09522107 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  thunk_FUN_03f6a5cc();
  if (lVar7 == 0) {
    thunk_FUN_03f6a5cc();
    System_Threading_Interlocked__Exchange(param_1 + 0x20,3,0);
    return;
  }
  if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
    uVar6 = 0;
    uVar5 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    do {
      if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar8 = *(long *)(lVar7 + 0x20 + uVar6 * 8);
      thunk_FUN_03f6a5cc();
      if (lVar8 != 0) {
        for (lVar8 = FUN_0619a4b0(lVar8,DAT_091bae60); lVar8 != 0;
            lVar8 = FUN_0619a3a4(lVar8,DAT_091bae48)) {
          iVar1 = FUN_0619a38c(lVar8,DAT_091bae40);
          if (-1 < iVar1 + -1) {
            do {
              iVar1 = iVar1 + -1;
              uVar3 = FUN_0619a354(lVar8,iVar1,DAT_091bae38);
              thunk_FUN_03f6a5cc();
              *(undefined8 *)(param_1 + 0x30) = uVar3;
              thunk_FUN_03f5d7b8(param_1 + 0x30,uVar3);
              lVar9 = *(long *)(param_1 + 0x30);
              thunk_FUN_03f6a5cc();
              if (lVar9 != 0) {
                local_70 = lVar8;
                thunk_FUN_03f5d7b8(&local_70,lVar8);
                plVar10 = *(long **)(param_1 + 0x30);
                uStack_68 = CONCAT44(uStack_68._4_4_,iVar1);
                thunk_FUN_03f6a5cc();
                if ((plVar10 == (long *)0x0) || (*plVar10 != DAT_0918eb00)) {
                  System_Threading_CancellationTokenSource__CancellationCallbackCoreWork
                            (param_1,local_70,uStack_68);
                }
                else {
                  plVar10 = (long *)plVar10[6];
                  uVar3 = thunk_FUN_03f9944c(DAT_0918a860);
                  System_Threading_SendOrPostCallback___ctor(uVar3,param_1,DAT_091c48a0);
                  uStack_88 = uStack_68;
                  local_90 = local_70;
                  uVar4 = FUN_03f5c42c(DAT_09182330,&local_90);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  (**(code **)(*plVar10 + 0x178))
                            (plVar10,uVar3,uVar4,*(undefined8 *)(*plVar10 + 0x180));
                  uVar2 = System_Environment__get_CurrentManagedThreadId(0);
                  thunk_FUN_03f6a5cc();
                  *(undefined4 *)(param_1 + 0x24) = uVar2;
                }
              }
            } while (0 < iVar1);
          }
        }
      }
      uVar5 = (ulong)*(uint *)(lVar7 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  thunk_FUN_03f6a5cc();
  *(undefined4 *)(param_1 + 0x20) = 3;
  thunk_FUN_03f6a5cc();
  *(undefined8 *)(param_1 + 0x30) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),0);
  System_Threading_Interlocked__MemoryBarrier(0);
  return;
}

