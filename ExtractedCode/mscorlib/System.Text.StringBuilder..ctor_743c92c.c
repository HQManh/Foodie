// rea decompile_all
// name: System.Text.StringBuilder$$.ctor
// address: 0x743c92c
// body: available
// range: 0x743c92c-0x743cb7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743ca54 to 0x743cb80 System.Text.StringBuilder$$ThreadSafeCopy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x743caec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743cb78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743cb7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_StringBuilder___ctor(long param_1,long param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((DAT_09521065 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09521065 = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_5 < 0) {
    uVar3 = thunk_FUN_03fc39d4(&DAT_091f7f28);
    puVar7 = (undefined8 *)&DAT_092188d0;
  }
  else {
    if (-1 < param_4) {
      if (param_3 < 0) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar3 = thunk_FUN_03f9944c();
        uVar4 = thunk_FUN_03fc39d4(&DAT_09223268);
        puVar5 = &DAT_0920d950;
      }
      else {
        if (param_2 == 0) {
          param_2 = **(long **)(DAT_09535468 + 0xb8);
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        if (param_3 <= *(int *)(param_2 + 0x10) - param_4) {
          iVar2 = *(int *)(DAT_09187e80 + 0xe4);
          *(undefined4 *)(param_1 + 0x28) = 0x7fffffff;
          if (iVar2 == 0) {
            FUN_03f5c424();
          }
          iVar2 = 0x10;
          if (param_5 != 0) {
            iVar2 = param_5;
          }
          uVar1 = System_Math__Max(iVar2,param_4,0);
          uVar3 = FUN_03f5c394(DAT_0917fcc8,uVar1);
          puVar7 = (undefined8 *)(param_1 + 0x10);
          *puVar7 = uVar3;
          thunk_FUN_03f5d7b8(puVar7,uVar3);
          *(int *)(param_1 + 0x20) = param_4;
          iVar2 = thunk_FUN_03f68190(0);
          System_Text_StringBuilder__ThreadSafeCopy
                    (param_2 + (ulong)(uint)(param_3 << 1) + (long)iVar2,*puVar7,0,param_4);
          return;
        }
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar3 = thunk_FUN_03f9944c();
        uVar4 = thunk_FUN_03fc39d4(&DAT_0921e638);
        puVar5 = &DAT_09204938;
      }
      uVar6 = thunk_FUN_03fc39d4(puVar5);
      System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar6,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091da3e8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar4);
    }
    uVar3 = thunk_FUN_03fc39d4(&DAT_091f7f30);
    puVar7 = &DAT_0921e638;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar7);
  uVar3 = SR__Format(uVar3,uVar4,0);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar4 = thunk_FUN_03f9944c();
  uVar6 = thunk_FUN_03fc39d4(puVar7);
  System_ArgumentOutOfRangeException___ctor(uVar4,uVar6,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091da3e8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
}

