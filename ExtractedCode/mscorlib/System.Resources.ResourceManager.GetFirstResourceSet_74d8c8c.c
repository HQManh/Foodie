// rea decompile_all
// name: System.Resources.ResourceManager$$GetFirstResourceSet
// address: 0x74d8c8c
// body: available
// range: 0x74d8c8c-0x74d8f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d8f3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d8f44 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d8f48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d8f4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d8f54 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d8f58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d8f5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d8f64 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d8f68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d8f6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d8f70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074d8f50) */
/* WARNING: Removing unreachable block (ram,0x074d8e84) */
/* WARNING: Removing unreachable block (ram,0x074d8f60) */
/* WARNING: Removing unreachable block (ram,0x074d8f40) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long System_Resources_ResourceManager__GetFirstResourceSet(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  char local_44 [4];
  long local_40;
  long local_38;
  
  if ((DAT_0952156c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0919fdb0);
    DAT_0952156c = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_44[0] = '\0';
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_074d8d4c:
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 != 0) {
      local_44[0] = '\0';
      local_40 = lVar4;
      System_Threading_Monitor__Enter(lVar4,local_44,0);
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = System_String__op_Equality(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10),0);
      if ((uVar3 & 1) == 0) {
        lVar4 = 0;
        iVar8 = 3;
      }
      else {
        if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0x18);
        iVar8 = 5;
      }
      if (local_44[0] != '\0') {
        System_Threading_Monitor__Exit(local_40,0);
      }
      if ((iVar8 != 3) && (iVar8 != 0)) {
        return lVar4;
      }
    }
    lVar6 = *(long *)(param_1 + 0x20);
    local_38 = 0;
    lVar4 = 0;
    if (lVar6 != 0) {
      local_44[0] = '\0';
      System_Threading_Monitor__Enter(lVar6,local_44,0);
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
      FUN_06fd9fbc(lVar6,uVar1,&local_38,DAT_0919fdb0);
      if (local_44[0] != '\0') {
        System_Threading_Monitor__Exit(lVar6,0);
      }
      lVar4 = local_38;
      if ((local_38 != 0) && (local_40 = *(long *)(param_1 + 0x50), local_40 != 0)) {
        local_44[0] = '\0';
        System_Threading_Monitor__Enter(local_40,local_44,0);
        if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *(long *)(param_1 + 0x50);
        uVar1 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        puVar7 = (undefined8 *)(lVar4 + 0x10);
        *puVar7 = uVar1;
        thunk_FUN_03f5d7b8(puVar7);
        if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(long *)(*(long *)(param_1 + 0x50) + 0x18) = local_38;
        thunk_FUN_03f5d7b8();
        lVar4 = local_38;
        if (local_44[0] != '\0') {
          System_Threading_Monitor__Exit(local_40,0);
          lVar4 = local_38;
        }
      }
    }
    return lVar4;
  }
  if (param_2 != (long *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      uVar3 = System_String__op_Equality(uVar1,uVar2,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        param_2 = (long *)System_Globalization_CultureInfo__get_InvariantCulture(0);
      }
      goto LAB_074d8d4c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

