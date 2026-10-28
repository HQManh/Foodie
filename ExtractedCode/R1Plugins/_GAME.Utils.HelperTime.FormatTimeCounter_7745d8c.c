// rea decompile_all
// name: _GAME.Utils.HelperTime$$FormatTimeCounter
// address: 0x7745d8c
// body: available
// range: 0x7745d8c-0x77461a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774619c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77461a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Utils_HelperTime__FormatTimeCounter(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong local_48;
  
  if ((DAT_09522b1d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f9f58);
    FUN_03f5c2a4(&DAT_091f9670);
    DAT_09522b1d = 1;
  }
  if ((long)param_1 < 0xe11) {
    local_48 = (long)param_1 / 0x3c;
    uVar5 = System_Int64__ToString(&local_48,DAT_091f9670,0);
    local_48 = (long)param_1 % 0x3c;
    uVar2 = System_Int64__ToString(&local_48,DAT_091f9670,0);
    System_String__Concat(uVar5,DAT_091f9f58,uVar2,0);
  }
  else {
    iVar8 = (int)param_1;
    if (param_1 < 0x15181) {
      param_1 = param_1 & 0xffffffff;
      local_48 = param_1 / 0xe10;
      uVar2 = System_Int64__ToString(&local_48,DAT_091f9670,0);
      local_48 = (ulong)((iVar8 + (int)(param_1 / 0xe10) * -0xe10 & 0xffffU) / 0x3c);
      uVar3 = System_Int64__ToString(&local_48,DAT_091f9670,0);
      local_48 = (ulong)(uint)(iVar8 + (int)(param_1 / 0x3c) * -0x3c);
      uVar5 = System_Int64__ToString(&local_48,DAT_091f9670,0);
      lVar6 = FUN_03f5c394(DAT_091805f8,5);
      if (lVar6 == 0) goto LAB_077461a0;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0774619c;
      *(undefined8 *)(lVar6 + 0x20) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x20),uVar2);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_0774619c;
      *(undefined8 *)(lVar6 + 0x28) = DAT_091f9f58;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x28));
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0774619c;
      *(undefined8 *)(lVar6 + 0x30) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x30),uVar3);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_0774619c;
      *(undefined8 *)(lVar6 + 0x38) = DAT_091f9f58;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x38));
      if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_0774619c;
      puVar7 = (undefined8 *)(lVar6 + 0x40);
      *puVar7 = uVar5;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_1;
      local_48 = param_1 / 0x15180;
      uVar2 = System_Int64__ToString(&local_48,DAT_091f9670,0);
      local_48 = (ulong)(uint)(iVar8 + SUB164(auVar1 * ZEXT816(0xc22e450672894ab7),10) * -0x15180) /
                 0xe10;
      uVar3 = System_Int64__ToString(&local_48,DAT_091f9670,0);
      local_48 = (ulong)((uint)((iVar8 + (int)(param_1 / 0xe10) * -0xe10) * 0x889) >> 0x11);
      uVar4 = System_Int64__ToString(&local_48,DAT_091f9670,0);
      local_48 = param_1 % 0x3c;
      uVar5 = System_Int64__ToString(&local_48,DAT_091f9670,0);
      lVar6 = FUN_03f5c394(DAT_091805f8,7);
      if (lVar6 == 0) {
LAB_077461a0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0774619c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar6 + 0x20) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x20),uVar2);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_0774619c;
      *(undefined8 *)(lVar6 + 0x28) = DAT_091f9f58;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x28));
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0774619c;
      *(undefined8 *)(lVar6 + 0x30) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x30),uVar3);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_0774619c;
      *(undefined8 *)(lVar6 + 0x38) = DAT_091f9f58;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x38));
      if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_0774619c;
      *(undefined8 *)(lVar6 + 0x40) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x40),uVar4);
      if (*(uint *)(lVar6 + 0x18) < 6) goto LAB_0774619c;
      *(undefined8 *)(lVar6 + 0x48) = DAT_091f9f58;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x48));
      if (*(uint *)(lVar6 + 0x18) < 7) goto LAB_0774619c;
      puVar7 = (undefined8 *)(lVar6 + 0x50);
      *puVar7 = uVar5;
    }
    thunk_FUN_03f5d7b8(puVar7,uVar5);
    System_String__Concat(lVar6,0);
  }
  return;
}

