// rea decompile_all
// name: AppsFlyerSDK.AppsFlyer.<init>d__12$$MoveNext
// address: 0x405ef30
// body: available
// range: 0x405ef30-0x405f3ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x405f3d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405f3dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405f3e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405f3e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405f3e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405f3ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_AppsFlyer_<init>d__12__MoveNext(int *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_28;
  
  if ((DAT_09515bbf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181508);
    FUN_03f5c2a4(&DAT_091814e8);
    FUN_03f5c2a4(&DAT_091e5d40);
    FUN_03f5c2a4(&DAT_0919fb70);
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_091853b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092247d0);
    FUN_03f5c2a4(&DAT_0921d4e8);
    FUN_03f5c2a4(&DAT_0921a650);
    FUN_03f5c2a4(&DAT_09220de8);
    FUN_03f5c2a4(&DAT_09222718);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_09220de0);
    DAT_09515bbf = 1;
  }
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(long *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
    if (local_28 == 0) {
      local_28 = 0;
      goto LAB_0405f3d8;
    }
  }
  else {
    if (*param_1 == 1) {
      local_28 = *(long *)(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      *param_1 = -1;
      if (local_28 == 0) {
        local_28 = 0;
        goto LAB_0405f3d8;
      }
      goto LAB_0405f334;
    }
    uVar6 = *(undefined8 *)(param_1 + 6);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = UnityEngine_Object__GetName(*(long *)(param_1 + 6),0);
      if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar2 = (undefined8 *)(*(long *)(DAT_091814e8 + 0xb8) + 8);
      *puVar2 = uVar6;
      thunk_FUN_03f5d7b8(puVar2,uVar6);
    }
    if (*(int *)(DAT_09181508 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09515c26 == '\0') {
      FUN_03f5c2a4(&DAT_09181508);
      DAT_09515c26 = '\x01';
    }
    if (*(int *)(DAT_09181508 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = *(long **)(*(long *)(DAT_09181508 + 0xb8) + 8);
    if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091814e8);
    }
    lVar4 = *(long *)(*(long *)(DAT_091814e8 + 0xb8) + 8);
    lVar3 = DAT_091f5700;
    if (lVar4 != 0) {
      lVar3 = lVar4;
    }
    if (plVar7 == (long *)0x0) goto LAB_0405f3d8;
    lVar4 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091853b8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_0405f1b8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091853b8,2);
LAB_0405f1b8:
    (*(code *)*puVar2)(plVar7,lVar3,puVar2[1]);
    lVar3 = thunk_FUN_03f9944c(DAT_09176b80);
    FUN_06fd76bc(lVar3,DAT_0919fb58);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fd8454(lVar3,DAT_0921a650,*(undefined8 *)(param_1 + 8),DAT_0919fb70);
    if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = AppsFlyerSDK_AppsFlyer__FireAsync(DAT_0921d4e8,lVar3);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = UnityEngine_Awaitable__GetAwaiter(lVar3,0);
    uVar1 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_28,0);
    if ((uVar1 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 10) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_04073e94(param_1 + 2,&local_28,param_1,DAT_091e5d40);
      return;
    }
    if (local_28 == 0) goto LAB_0405f3d8;
  }
  UnityEngine_Awaitable__PropagateExceptionAndRelease(local_28,0);
  lVar3 = thunk_FUN_03f9944c(DAT_09176b80);
  FUN_06fd76bc(lVar3,DAT_0919fb58);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_06fd8454(lVar3,DAT_09220de0,DAT_092247d0,DAT_0919fb70);
  if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_06fd8454(lVar3,DAT_09220de8,**(undefined8 **)(DAT_091814e8 + 0xb8),DAT_0919fb70);
  lVar3 = AppsFlyerSDK_AppsFlyer__FireAsync(DAT_09222718,lVar3);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_28 = UnityEngine_Awaitable__GetAwaiter(lVar3,0);
  uVar1 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_28,0);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
    *(long *)(param_1 + 10) = local_28;
    thunk_FUN_03f5d7b8(param_1 + 10,0);
    FUN_04073e94(param_1 + 2,&local_28,param_1,DAT_091e5d40);
    return;
  }
  if (local_28 == 0) {
LAB_0405f3d8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0405f334:
  UnityEngine_Awaitable__PropagateExceptionAndRelease(local_28,0);
  *param_1 = -2;
  FUN_0406b130(param_1 + 2,0);
  return;
}

