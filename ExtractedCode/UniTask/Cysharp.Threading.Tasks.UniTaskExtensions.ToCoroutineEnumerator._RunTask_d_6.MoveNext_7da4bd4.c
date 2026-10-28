// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskExtensions.ToCoroutineEnumerator.<RunTask>d__6$$MoveNext
// address: 0x7da4bd4
// body: available
// range: 0x7da4bd4-0x7da4e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7da4e90 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7da4e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07da4e90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Cysharp_Threading_Tasks_UniTaskExtensions_ToCoroutineEnumerator_<RunTask>d__6__MoveNext
               (int *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  long *local_60;
  ulong uStack_58;
  long local_48;
  long *local_40;
  ulong uStack_38;
  int local_24;
  
  if ((DAT_09525eb8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2888);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525eb8 = 1;
  }
  local_48 = *(long *)(param_1 + 8);
  local_24 = *param_1;
  local_60 = (long *)0x0;
  uStack_58 = 0;
  if (local_24 == 0) {
    uStack_58 = *(ulong *)(param_1 + 0xc);
    local_60 = *(long **)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    local_24 = -1;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_38 = *(ulong *)(param_1 + 6);
    local_40 = *(long **)(param_1 + 4);
    thunk_FUN_03f5d7b8(&local_40,0);
    uStack_58 = uStack_38;
    local_60 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    plVar1 = local_60;
    if (local_60 != (long *)0x0) {
      lVar4 = *local_60;
      uVar7 = uStack_58 & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07da4d48;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_60,DAT_091868c0,0);
LAB_07da4d48:
      iVar2 = (*(code *)*puVar3)(plVar1,uVar7,puVar3[1]);
      if (iVar2 == 0) {
        local_24 = 0;
        *param_1 = 0;
        *(ulong *)(param_1 + 0xc) = uStack_58;
        *(long **)(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049d1de0(param_1 + 2,&local_60,param_1,DAT_091c2888);
        iVar2 = 4;
        goto LAB_07da4df4;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar1 = local_60;
  if (local_60 != (long *)0x0) {
    lVar4 = *local_60;
    uVar7 = uStack_58 & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_07da4de0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_60,DAT_091868c0,2);
LAB_07da4de0:
    (*(code *)*puVar3)(plVar1,uVar7,puVar3[1]);
  }
  iVar2 = 9;
LAB_07da4df4:
  if (local_24 < 0) {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_48 + 0x10) = 1;
  }
  if ((iVar2 == 0) || (iVar2 == 9)) {
    *param_1 = -2;
    FUN_042dada8(param_1 + 2,0);
  }
  return;
}

