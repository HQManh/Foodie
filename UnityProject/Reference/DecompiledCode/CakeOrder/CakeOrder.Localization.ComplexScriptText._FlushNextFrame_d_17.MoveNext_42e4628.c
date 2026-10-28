// rea decompile_all
// name: CakeOrder.Localization.ComplexScriptText.<FlushNextFrame>d__17$$MoveNext
// address: 0x42e4628
// body: available
// range: 0x42e4628-0x42e493b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e4930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e4938 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042e4934) */

void CakeOrder_Localization_ComplexScriptText_<FlushNextFrame>d__17__MoveNext(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_88;
  long lStack_80;
  undefined8 *local_78;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_3c;
  undefined8 local_38;
  
  if ((DAT_09517449 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2890);
    FUN_03f5c2a4(&DAT_09182870);
    FUN_03f5c2a4(&DAT_091a46b8);
    FUN_03f5c2a4(&DAT_091a46c0);
    FUN_03f5c2a4(&DAT_091a46c8);
    FUN_03f5c2a4(&DAT_091b0ad8);
    FUN_03f5c2a4(&DAT_091b0ae8);
    FUN_03f5c2a4(&DAT_091b0ac8);
    FUN_03f5c2a4(&DAT_0917cdb8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09517449 = 1;
  }
  local_38._4_4_ = *param_1;
  local_3c = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_38._0_4_ = 0;
  if (local_38._4_4_ == 0) {
    iVar1 = param_1[4];
    param_1[4] = 0;
    *param_1 = -1;
    local_38 = CONCAT44(0xffffffff,iVar1);
  }
  else {
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_3c = Cysharp_Threading_Tasks_UniTask__Yield(8,0);
    uVar3 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_3c,0);
    local_38 = CONCAT44(local_38._4_4_,uVar3);
    uVar4 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&local_38,0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      uVar2 = DAT_091c2890;
      iVar1 = (int)local_38;
      local_38 = local_38 & 0xffffffff;
      param_1[4] = iVar1;
      FUN_042f4b9c(param_1 + 2,&local_38,param_1,uVar2);
      return;
    }
  }
  Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&local_38,0);
  if (*(int *)(DAT_09182870 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = DAT_0917cdb8;
  uVar7 = *(undefined8 *)(*(long *)(DAT_09182870 + 0xb8) + 0x40);
  *(undefined1 *)(*(long *)(DAT_09182870 + 0xb8) + 0x48) = 0;
  lVar5 = thunk_FUN_03f9944c(uVar2);
  FUN_057e053c(lVar5,uVar7,DAT_091b0ac8);
  lVar6 = *(long *)(*(long *)(DAT_09182870 + 0xb8) + 0x40);
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    if (lVar5 != 0) {
      FUN_057e185c(&local_88,lVar5,DAT_091b0ae8);
      uStack_58 = lStack_80;
      local_60 = local_88;
      local_50 = local_78;
      lStack_80 = (long)&local_38 + 4;
      local_88 = 0;
      local_78 = &local_60;
      while (uVar4 = FUN_071bd28c(&local_60,DAT_091a46c0), uVar2 = local_50, (uVar4 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_09182870 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*(int *)(*(long *)(DAT_09182870 + 0xb8) + 0x10) != 0) {
            if (*(int *)(DAT_09182870 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            CakeOrder_Localization_ComplexScriptText__Register(uVar2,1);
          }
        }
      }
      if ((long)local_38 < 0) {
        FUN_071bd288(local_78,DAT_091a46b8);
      }
      *param_1 = -2;
      FUN_042dada8(param_1 + 2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

