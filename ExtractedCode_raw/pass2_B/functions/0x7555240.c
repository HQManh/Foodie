// rea decompile_all
// name: System.Collections.SortedList$$CopyTo
// address: 0x7555240
// body: available
// range: 0x7555240-0x75554df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75553b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75553bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75554dc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_SortedList__CopyTo(long *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_0952195a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183b38);
    DAT_0952195a = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_092179d0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091fbec0);
    System_ArgumentNullException___ctor(uVar4,uVar7,uVar3,0);
  }
  else {
    iVar1 = System_Array__get_Rank(param_2,0);
    if (iVar1 == 1) {
      if (param_3 < 0) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar4 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_092179f8);
        uVar3 = thunk_FUN_03fc39d4(&DAT_09208d80);
        System_ArgumentOutOfRangeException___ctor(uVar4,uVar7,uVar3,0);
      }
      else {
        iVar1 = System_Array__get_Length(param_2,0);
        iVar2 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
        if (iVar2 <= iVar1 - param_3) {
          iVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
          if (0 < iVar1) {
            lVar8 = 4;
            do {
              lVar5 = param_1[2];
              if (lVar5 == 0) {
LAB_075553b8:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar8 - 4U) {
LAB_075553bc:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar6 = param_1[3];
              if (lVar6 == 0) goto LAB_075553b8;
              if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar8 - 4U) goto LAB_075553bc;
              local_50 = *(undefined8 *)(lVar5 + lVar8 * 8);
              uVar7 = *(undefined8 *)(lVar6 + lVar8 * 8);
              thunk_FUN_03f5d7b8(&local_50);
              uStack_48 = uVar7;
              thunk_FUN_03f5d7b8(&uStack_48,uVar7);
              uStack_58 = uStack_48;
              local_60 = local_50;
              uVar7 = FUN_03f5c42c(DAT_09183b38,&local_60);
              System_Array__SetValue(param_2,uVar7,param_3 + (int)lVar8 + -4,0);
              iVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
              lVar5 = lVar8 + -3;
              lVar8 = lVar8 + 1;
            } while (lVar5 < iVar1);
          }
          return;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar4 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_09200800);
        System_ArgumentException___ctor(uVar4,uVar7,0);
      }
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar4 = thunk_FUN_03f9944c();
      uVar7 = thunk_FUN_03fc39d4(&DAT_09209d60);
      uVar3 = thunk_FUN_03fc39d4(&DAT_092179d0);
      System_ArgumentException___ctor(uVar4,uVar7,uVar3,0);
    }
  }
  uVar7 = thunk_FUN_03fc39d4(&DAT_091d96a8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar7);
}

