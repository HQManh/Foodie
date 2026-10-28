// rea decompile_all
// name: System.Array$$System.Collections.IList.get_Item
// address: 0x75d9b40
// body: available
// range: 0x75d9b40-0x75d9b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array__System_Collections_IList_get_Item(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_03f6b444();
  if (iVar1 == 1) {
    iVar1 = FUN_03f6b404(param_1,0);
    if (iVar1 <= param_2) {
      iVar2 = FUN_03f6b404(param_1,0);
      iVar3 = FUN_03f6b3c4(param_1,0);
      if (param_2 <= iVar2 + iVar3 + -1) {
        plVar4 = (long *)System_Object__GetType(param_1,0);
        if (plVar4 != (long *)0x0) {
          plVar4 = (long *)(**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
          if (plVar4 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(*plVar4 + 0x3a0));
            if ((uVar5 & 1) == 0) {
              FUN_03f6b56c(param_1,param_2 - iVar1);
              return;
            }
            thunk_FUN_03fc39d4(&DAT_09188920);
            uVar6 = thunk_FUN_03f9944c();
            uVar7 = thunk_FUN_03fc39d4(&DAT_09211220);
            System_NotSupportedException___ctor(uVar6,uVar7,0);
            goto LAB_075cf6c4;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    thunk_FUN_03fc39d4(&DAT_09186b90);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09204948);
    System_IndexOutOfRangeException___ctor(uVar6,uVar7,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09209d60);
    System_ArgumentException___ctor(uVar6,uVar7,0);
  }
LAB_075cf6c4:
  uVar7 = thunk_FUN_03fc39d4(&DAT_091c07e0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar7);
}

