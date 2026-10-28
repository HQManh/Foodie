// rea decompile_all
// name: FUN_0775a028
// address: 0x775a028
// body: available
// range: 0x775a028-0x775a1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775a1bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775a1c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775a1c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0775a028(ulong param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a40b8);
    FUN_03f5c2a4(&DAT_091a40c0);
    FUN_03f5c2a4(&DAT_091a40c8);
    FUN_03f5c2a4(&DAT_091afa48);
    FUN_03f5c2a4(&DAT_091afa58);
    FUN_03f5c2a4(&DAT_091afa38);
    FUN_03f5c2a4(&DAT_0917cae0);
    *(undefined1 *)(unaff_x23 + 0xbeb) = 1;
  }
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  _GAME_Utils_Helper__SetActive(*(undefined8 *)(param_2 + 0x28),0,0);
  lVar2 = thunk_FUN_03f9944c(*unaff_x22);
  FUN_057e0400(lVar2,*unaff_x20);
  plVar6 = (long *)(param_2 + 0x38);
  *plVar6 = lVar2;
  thunk_FUN_03f5d7b8(plVar6,lVar2);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&stack0x00000018,param_3,DAT_091afa58);
  while( true ) {
    uVar3 = FUN_071bd28c(&stack0x00000018,DAT_091a40c0);
    if ((uVar3 & 1) == 0) {
      FUN_071bd288(&stack0x00000018,DAT_091a40b8);
      *(undefined1 *)(param_2 + 0x40) = 0;
      return;
    }
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar6;
    uVar4 = _GAME_GameItem_RwItemModel__Copy(in_stack_00000028,0,0);
    lVar2 = DAT_091afa48;
    if (lVar7 == 0) break;
    lVar5 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar7,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

