// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskExtensions.<Unwrap>d__70$$MoveNext
// address: 0x7da855c
// body: available
// range: 0x7da855c-0x7da887b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7da8878 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTaskExtensions_<Unwrap>d__70__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *local_70;
  long lStack_68;
  ulong local_60;
  undefined4 local_50;
  undefined8 local_48;
  long *local_40;
  long lStack_38;
  ulong local_30;
  
  if ((DAT_09525ec9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1ec0);
    FUN_03f5c2a4(&DAT_091c1f30);
    FUN_03f5c2a4(&DAT_0919a730);
    FUN_03f5c2a4(&DAT_0919a738);
    FUN_03f5c2a4(&DAT_091bdf28);
    DAT_09525ec9 = 1;
  }
  local_40 = (long *)0x0;
  lStack_38 = 0;
  local_30 = 0;
  local_48 = 0;
  local_50 = 0;
  if (*param_1 == 0) {
    local_30 = *(ulong *)(param_1 + 0x10);
    lStack_38 = *(long *)(param_1 + 0xe);
    local_40 = *(long **)(param_1 + 0xc);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_07da878c;
    }
    lStack_68 = 0;
    local_60 = 0;
    local_70 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdf28 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lStack_68 = *(long *)(param_1 + 8);
    local_70 = *(long **)(param_1 + 6);
    local_60 = *(ulong *)(param_1 + 10);
    thunk_FUN_03f5d7b8(&local_70,0);
    lStack_38 = lStack_68;
    local_40 = local_70;
    local_30 = local_60;
    uVar6 = FUN_041e5390(&local_40,DAT_0919a738);
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 0xe) = lStack_38;
      *(long **)(param_1 + 0xc) = local_40;
      *(ulong *)(param_1 + 0x10) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049af890(param_1 + 2,&local_40,param_1,DAT_091c1ec0);
      return;
    }
  }
  plVar8 = local_40;
  lVar4 = lStack_38;
  if (local_40 != (long *)0x0) {
    uVar6 = local_30 & 0xffff;
    lVar4 = *(long *)(DAT_0919a730 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07da875c;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,lVar4,0);
LAB_07da875c:
    lVar4 = (*(code *)*puVar2)(plVar8,uVar6,puVar2[1]);
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_48 = System_Threading_Tasks_Task__GetAwaiter(lVar4,0);
  uVar6 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_48,0);
  if ((uVar6 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x12) = local_48;
    thunk_FUN_03f5d7b8(param_1 + 0x12,0);
    FUN_049b0118(param_1 + 2,&local_48,param_1,DAT_091c1f30);
    return;
  }
LAB_07da878c:
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_48,0);
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091866a8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_07da885c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_07da885c:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
  }
  return;
}

