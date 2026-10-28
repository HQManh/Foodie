// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.PlayerLoopRunner$$AddAction
// address: 0x7dcbe5c
// body: available
// range: 0x7dcbe5c-0x7dcc0d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dcc09c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcc0a0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcc0a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcc0a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcc0ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcc0b8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcc0cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcc0d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07dcc0a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Cysharp_Threading_Tasks_Internal_PlayerLoopRunner__AddAction(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  char local_34 [4];
  
  if ((DAT_095261a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c05d8);
    FUN_03f5c2a4(&DAT_091b4890);
    FUN_03f5c2a4(&DAT_091d5e00);
    DAT_095261a9 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_34[0] = '\0';
  System_Threading_Monitor__Enter(uVar2,local_34,0);
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar5 = 4;
LAB_07dcbf78:
    if (local_34[0] != '\0') {
      System_Threading_Monitor__Exit(uVar2,0);
    }
    if ((uVar5 | 4) == 4) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      local_34[0] = '\0';
      System_Threading_Monitor__Enter(uVar2,local_34,0);
      plVar3 = *(long **)(param_1 + 0x38);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = *(uint *)(param_1 + 0x30);
      if (uVar5 == *(uint *)(plVar3 + 3)) {
        if (-1 < (int)(uVar5 + 0xc0000000)) {
          uVar2 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,DAT_091d5e00);
        }
        FUN_0492e500((undefined8 *)(param_1 + 0x38),uVar5 << 1,DAT_091c05d8);
        uVar5 = *(uint *)(param_1 + 0x30);
        plVar3 = *(long **)(param_1 + 0x38);
        *(uint *)(param_1 + 0x30) = uVar5 + 1;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else {
        *(uint *)(param_1 + 0x30) = uVar5 + 1;
      }
      if ((param_2 != 0) &&
         (lVar6 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
        uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,0);
      }
      if (*(uint *)(plVar3 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar3[(long)(int)uVar5 + 4] = param_2;
      thunk_FUN_03f5d7b8(plVar3 + (long)(int)uVar5 + 4,param_2);
      if (local_34[0] != '\0') {
        System_Threading_Monitor__Exit(uVar2,0);
      }
    }
    return;
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if ((lVar6 != 0) && (lVar4 = *(long *)(lVar6 + 0x10), lVar4 != 0)) {
    uVar5 = *(uint *)(lVar4 + 0x18);
    if (*(uint *)(lVar6 + 0x20) == uVar5) {
      FUN_05a8e5a8(lVar6,*(undefined8 *)(*(long *)(*(long *)(DAT_091b4890 + 0x20) + 0xc0) + 0x28));
      lVar4 = *(long *)(lVar6 + 0x10);
      if (lVar4 == 0) goto LAB_07dcc09c;
      uVar5 = *(uint *)(lVar4 + 0x18);
    }
    if (uVar5 <= *(uint *)(lVar6 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar3 = (long *)(lVar4 + (long)(int)*(uint *)(lVar6 + 0x1c) * 8 + 0x20);
    *plVar3 = param_2;
    thunk_FUN_03f5d7b8(plVar3,param_2);
    if (*(long *)(lVar6 + 0x10) != 0) {
      iVar1 = 0;
      if (*(int *)(lVar6 + 0x1c) + 1 != *(int *)(*(long *)(lVar6 + 0x10) + 0x18)) {
        iVar1 = *(int *)(lVar6 + 0x1c) + 1;
      }
      *(int *)(lVar6 + 0x1c) = iVar1;
      *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
      uVar5 = 3;
      goto LAB_07dcbf78;
    }
  }
LAB_07dcc09c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

