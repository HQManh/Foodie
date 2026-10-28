// rea decompile_all
// name: System.Collections.ListDictionaryInternal$$CopyTo
// address: 0x7551b1c
// body: available
// range: 0x7551b1c-0x7551d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7551d1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_ListDictionaryInternal__CopyTo(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_09521943 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183b38);
    DAT_09521943 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentNullException___ctor(uVar3,uVar2,0);
  }
  else {
    iVar1 = System_Array__get_Rank(param_2,0);
    if (iVar1 == 1) {
      if (param_3 < 0) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar3 = thunk_FUN_03f9944c();
        uVar2 = thunk_FUN_03fc39d4(&DAT_0921d350);
        uVar4 = thunk_FUN_03fc39d4(&DAT_09208d80);
        System_ArgumentOutOfRangeException___ctor(uVar3,uVar2,uVar4,0);
      }
      else {
        iVar1 = System_Array__get_Length(param_2,0);
        if (*(int *)(param_1 + 0x1c) <= iVar1 - param_3) {
          for (lVar5 = *(long *)(param_1 + 0x10); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
            local_50 = *(undefined8 *)(lVar5 + 0x10);
            uVar2 = *(undefined8 *)(lVar5 + 0x18);
            uStack_48 = 0;
            thunk_FUN_03f5d7b8(&local_50);
            uStack_48 = uVar2;
            thunk_FUN_03f5d7b8(&uStack_48,uVar2);
            uStack_58 = uStack_48;
            local_60 = local_50;
            uVar2 = FUN_03f5c42c(DAT_09183b38,&local_60);
            System_Array__SetValue(param_2,uVar2,param_3,0);
            param_3 = param_3 + 1;
          }
          return;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        uVar2 = thunk_FUN_03fc39d4(&DAT_092049a8);
        uVar4 = thunk_FUN_03fc39d4(&DAT_0921d350);
        System_ArgumentException___ctor(uVar3,uVar2,uVar4,0);
      }
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar3 = thunk_FUN_03f9944c();
      uVar2 = thunk_FUN_03fc39d4(&DAT_09209d60);
      System_ArgumentException___ctor(uVar3,uVar2,0);
    }
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_091d2600);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

