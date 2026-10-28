// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskExtensions.<ForgetCoreWithCatch>d__50$$MoveNext
// address: 0x7da6184
// body: available
// range: 0x7da6184-0x7da658f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7da641c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7da658c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTaskExtensions_<ForgetCoreWithCatch>d__50__MoveNext(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  ulong local_70;
  undefined8 uStack_68;
  long *local_60;
  ulong uStack_58;
  long *local_50;
  ulong uStack_48;
  ulong local_40;
  undefined8 uStack_38;
  
  if ((DAT_09525ebf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c27f8);
    FUN_03f5c2a4(&DAT_091c2860);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525ebf = 1;
  }
  iVar9 = *param_1;
  local_60 = (long *)0x0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (iVar9 == 0) {
    uStack_58 = *(ulong *)(param_1 + 0x12);
    local_60 = *(long **)(param_1 + 0x10);
    iVar9 = -1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_07da630c:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    plVar4 = local_60;
    if (local_60 != (long *)0x0) {
      lVar5 = *local_60;
      uVar8 = uStack_58 & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_07da6390;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_60,DAT_091868c0,2);
LAB_07da6390:
      (*(code *)*puVar3)(plVar4,uVar8,puVar3[1]);
    }
    lVar5 = DAT_091842a0;
    if (param_1[0xe] != 1) goto LAB_07da647c;
    plVar4 = *(long **)(param_1 + 0xc);
    if (plVar4 == (long *)0x0) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_091842a0 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != DAT_091842a0)) {
LAB_07da6414:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4,lVar5);
      }
      *(long **)(param_1 + 0x14) = plVar4;
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar5)) goto LAB_07da6414;
    }
    thunk_FUN_03f5d7b8();
    if (iVar9 == 1) goto LAB_07da6434;
    if ((char)param_1[8] != '\0') {
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_38 = 0;
      local_40 = 8;
      thunk_FUN_03f5d7b8(&uStack_38,0);
      local_40 = local_40 & 0xffffffff;
      thunk_FUN_03f5d7b8((ulong)&local_40 | 8,0);
      uStack_68 = uStack_38;
      local_70 = local_40;
      uVar6 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted();
      if ((uVar6 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x18) = uStack_68;
        *(ulong *)(param_1 + 0x16) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 0x18,0);
        FUN_049b55d0(param_1 + 2,&local_70,param_1,DAT_091c27f8);
        return;
      }
      goto LAB_07da6448;
    }
  }
  else {
    if (iVar9 != 1) {
      param_1[0xe] = 0;
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_48 = *(ulong *)(param_1 + 6);
      local_50 = *(long **)(param_1 + 4);
      thunk_FUN_03f5d7b8(&local_50,0);
      uStack_58 = uStack_48;
      local_60 = local_50;
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
      plVar4 = local_60;
      if (local_60 != (long *)0x0) {
        lVar5 = *local_60;
        uVar8 = uStack_58 & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07da62f8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_60,DAT_091868c0,0);
LAB_07da62f8:
        iVar2 = (*(code *)*puVar3)(plVar4,uVar8,puVar3[1]);
        if (iVar2 == 0) {
          *param_1 = 0;
          *(ulong *)(param_1 + 0x12) = uStack_58;
          *(long **)(param_1 + 0x10) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          FUN_049d18a4(param_1 + 2,&local_60,param_1,DAT_091c2860);
          return;
        }
      }
      goto LAB_07da630c;
    }
LAB_07da6434:
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    local_70 = *(ulong *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_07da6448:
    Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult(&local_70);
  }
  lVar5 = *(long *)(param_1 + 10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(lVar5 + 0x18))
            (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(param_1 + 0x14),
             *(undefined8 *)(lVar5 + 0x28));
  piVar7 = param_1 + 0x14;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_03f5d7b8(piVar7,0);
LAB_07da647c:
  piVar7 = param_1 + 0xc;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_03f5d7b8(piVar7,0);
  *param_1 = -2;
  FUN_042dada8(param_1 + 2,0);
  return;
}

