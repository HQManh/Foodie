// rea decompile_all
// name: System.Security.Util.Tokenizer$$ChangeFormat
// address: 0x7458018
// body: available
// range: 0x7458018-0x745824b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7458248 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Util_Tokenizer__ChangeFormat(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  long *plVar8;
  
  if ((DAT_09521133 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188030);
    FUN_03f5c2a4(&DAT_0918b320);
    FUN_03f5c2a4(&DAT_09195180);
    DAT_09521133 = 1;
  }
  if (param_2 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x3c);
  if (uVar6 < 3) {
    lVar5 = System_Text_Encoding__get_Unicode();
    if (lVar5 == param_2) {
      uVar7 = 0;
      goto LAB_07458230;
    }
    lVar5 = System_Text_Encoding__get_UTF8();
    if (lVar5 == param_2) {
      uVar7 = 1;
      goto LAB_07458230;
    }
    lVar5 = System_Text_Encoding__get_ASCII();
    if (lVar5 == param_2) {
      uVar7 = 2;
      goto LAB_07458230;
    }
    uVar6 = *(uint *)(param_1 + 0x3c);
    if (2 < uVar6) goto LAB_07458084;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x34);
    plVar3 = (long *)thunk_FUN_03f9944c(DAT_09188030);
    System_IO_MemoryStream___ctor(plVar3,uVar4,iVar2,iVar1 - iVar2,0);
  }
  else {
    if (0xfffffffc < uVar6 - 6) {
      return;
    }
LAB_07458084:
    if (0xfffffffc < uVar6 - 6) {
      return;
    }
    plVar8 = *(long **)(param_1 + 0x40);
    if (plVar8 == (long *)0x0) {
      return;
    }
    if (*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_09195180 + 0x130)) {
      return;
    }
    if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_09195180 + 0x130) * 8 + -8) !=
        DAT_09195180) {
      return;
    }
    plVar3 = (long *)plVar8[2];
    if (plVar3 == (long *)0x0) {
LAB_07458248:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
    uVar4 = System_String__CreateString(0,0x20,(int)plVar8[3],0);
    plVar8 = (long *)plVar8[2];
    if (((plVar8 == (long *)0x0) ||
        (plVar8 = (long *)(**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250)),
        plVar8 == (long *)0x0)) ||
       (iVar2 = (**(code **)(*plVar8 + 0x1f8))(plVar8,uVar4,*(undefined8 *)(*plVar8 + 0x200)),
       plVar3 == (long *)0x0)) goto LAB_07458248;
    (**(code **)(*plVar3 + 0x218))(plVar3,(long)iVar2,*(undefined8 *)(*plVar3 + 0x220));
  }
  uVar4 = thunk_FUN_03f9944c(DAT_0918b320);
  System_IO_StreamReader___ctor(uVar4,plVar3,param_2,0);
  lVar5 = thunk_FUN_03f9944c(DAT_09195180);
  System_Object___ctor(lVar5,0);
  *(undefined8 *)(lVar5 + 0x10) = uVar4;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x10),uVar4);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(long *)(param_1 + 0x40) = lVar5;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x40),lVar5);
  uVar7 = 6;
LAB_07458230:
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  return;
}

