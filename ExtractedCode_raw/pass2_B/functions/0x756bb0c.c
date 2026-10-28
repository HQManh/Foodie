// rea decompile_all
// name: System.IO.StreamReader$$ReadSpan
// address: 0x756bb0c
// body: available
// range: 0x756bb0c-0x756bc53 inclusive
// range: 0x756bc5c-0x756bd2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756bbd4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756bc38 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756bc50 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756bc74 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756bd28 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_IO_StreamReader__ReadSpan(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  char cVar8;
  long local_78;
  ulong local_70;
  char local_64 [4];
  
  if ((DAT_09521a15 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba960);
    FUN_03f5c2a4(&DAT_091ba978);
    FUN_03f5c2a4(&DAT_091ba958);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521a15 = 1;
  }
  local_64[0] = '\0';
  local_78 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_091fe0f8);
    System_ObjectDisposedException___ctor(uVar3,0,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091da138);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  System_IO_StreamReader__CheckAsyncTaskInProgress(param_1);
  cVar8 = '\0';
  uVar5 = 0;
  local_64[0] = '\0';
  uVar7 = param_3;
  do {
    if ((int)uVar7 < 1) {
      return uVar5;
    }
    uVar2 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40);
    if (uVar2 == 0) {
      if (param_3 < uVar5) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar2 = System_IO_StreamReader__ReadBuffer
                        (param_1,param_2 + (long)(int)uVar5 * 2,param_3 - uVar5,local_64);
      cVar8 = local_64[0];
      if (uVar2 == 0) {
        return uVar5;
      }
    }
    if ((int)uVar7 <= (int)uVar2) {
      uVar2 = uVar7;
    }
    if (cVar8 == '\0') {
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      uVar1 = *(uint *)(param_1 + 0x40);
      if ((*(uint *)(lVar6 + 0x18) < uVar1) || (*(uint *)(lVar6 + 0x18) - uVar1 < uVar2)) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      local_78 = lVar6 + (long)(int)uVar1 * 2 + 0x20;
      local_70 = (ulong)uVar2;
      if (param_3 < uVar5) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      FUN_06109210(&local_78,param_2 + (long)(int)uVar5 * 2,param_3 - uVar5,DAT_091ba960);
      *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + uVar2;
    }
    uVar5 = uVar2 + uVar5;
    uVar7 = uVar7 - uVar2;
    if (*(char *)(param_1 + 0x56) != '\0') {
      return uVar5;
    }
  } while( true );
}

