// rea decompile_all
// name: System.IO.StreamReader$$ReadAsync
// address: 0x756ca30
// body: available
// range: 0x756ca30-0x756cd0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756cb2c to 0x75739b8 System.IO.TextReader$$ReadAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x756cb5c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756cc8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756cd0c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_StreamReader__ReadAsync(long *param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  
  if ((DAT_09521a1b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4758);
    FUN_03f5c2a4(&DAT_09172f18);
    FUN_03f5c2a4(&DAT_091beb78);
    DAT_09521a1b = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_092185d8);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091fcf10);
    System_ArgumentNullException___ctor(uVar6,uVar3,uVar2,0);
  }
  else {
    if ((int)(param_4 | param_3) < 0) {
      puVar1 = &DAT_09219b28;
      if ((int)param_3 < 0) {
        puVar1 = &DAT_0921d350;
      }
      uVar3 = thunk_FUN_03fc39d4(puVar1);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar2 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_09208d80);
      System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,uVar6,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091da128);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
    if ((int)(*(int *)(param_2 + 0x18) - param_3) < (int)param_4) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar6 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_09209710);
      System_ArgumentException___ctor(uVar6,uVar3,0);
    }
    else {
      uVar2 = System_Object__GetType(param_1,0);
      uVar3 = DAT_09172f18;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      uVar4 = System_Type__op_Inequality(uVar2,uVar3,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = System_IO_TextReader__ReadAsync(param_1,param_2,param_3,param_4,0);
        return lVar5;
      }
      if (param_1[3] != 0) {
        System_IO_StreamReader__CheckAsyncTaskInProgress(param_1);
        local_60 = 0;
        local_58 = 0;
        if ((param_3 <= *(uint *)(param_2 + 0x18)) &&
           (param_4 <= *(uint *)(param_2 + 0x18) - param_3)) {
          local_60 = param_2;
          thunk_FUN_03f5d7b8(&local_60,param_2);
          local_58 = CONCAT44(param_4,param_3);
          local_50 = (**(code **)(*param_1 + 0x238))
                               (param_1,local_60,local_58,0,*(undefined8 *)(*param_1 + 0x240));
          lVar5 = FUN_066102e0(local_50,DAT_091beb78);
          param_1[0xb] = lVar5;
          thunk_FUN_03f5d7b8(param_1 + 0xb,lVar5);
          return lVar5;
        }
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      thunk_FUN_03fc39d4(&DAT_09188ae0);
      uVar6 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_091fe0f8);
      System_ObjectDisposedException___ctor(uVar6,0,uVar3,0);
    }
  }
  uVar3 = thunk_FUN_03fc39d4(&DAT_091da128);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar3);
}

