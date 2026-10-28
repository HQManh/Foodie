// rea decompile_all
// name: MessagePack.FormatterResolverExtensions$$GetFormatterDynamic
// address: 0x7382774
// body: available
// range: 0x7382774-0x7382abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7382a44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7382aac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7382ab0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7382abc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_FormatterResolverExtensions__GetFormatterDynamic(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long local_38;
  
  if ((DAT_09520a1d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a7738);
    FUN_03f5c2a4(&DAT_091cbb90);
    FUN_03f5c2a4(&DAT_091843a0);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_09171c08);
    FUN_03f5c2a4(&DAT_09180368);
    FUN_03f5c2a4(&DAT_091bd440);
    FUN_03f5c2a4(&DAT_091bd448);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_0921d5b0);
    DAT_09520a1d = 1;
  }
  local_38 = 0;
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    puVar7 = &DAT_092219e8;
LAB_07382a84:
    uVar4 = thunk_FUN_03fc39d4(puVar7);
    System_ArgumentNullException___ctor(uVar5,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091ccf58);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar4);
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    puVar7 = &DAT_09224510;
    goto LAB_07382a84;
  }
  if (*(int *)(DAT_09184938 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09184938 + 0xb8) == 0) goto LAB_07382a44;
  uVar1 = FUN_04a6dd34(**(long **)(DAT_09184938 + 0xb8),param_2,&local_38,DAT_091bd448);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_09184938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar8 = *(long **)(*(long *)(DAT_09184938 + 0xb8) + 8);
    plVar2 = (long *)FUN_03f5c394(DAT_09180748,1);
    if (plVar2 == (long *)0x0) goto LAB_07382a44;
    lVar3 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar3 == 0) {
LAB_07382ab4:
      uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,0);
    }
    if ((int)plVar2[3] == 0) {
LAB_07382ab0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar2[4] = param_2;
    thunk_FUN_03f5d7b8(plVar2 + 4,param_2);
    if (plVar8 == (long *)0x0) goto LAB_07382a44;
    uVar4 = (**(code **)(*plVar8 + 0x418))(plVar8,plVar2,*(undefined8 *)(*plVar8 + 0x420));
    uVar5 = DAT_09171c08;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
    if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091843a0);
    }
    lVar3 = System_Linq_Expressions_Expression__Parameter(uVar5,DAT_0921d5b0,0);
    uVar5 = System_Linq_Expressions_Expression__Call(lVar3,uVar4,0);
    plVar2 = (long *)FUN_03f5c394(DAT_09180368,1);
    if (plVar2 == (long *)0x0) goto LAB_07382a44;
    if ((lVar3 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0))
    goto LAB_07382ab4;
    if ((int)plVar2[3] == 0) goto LAB_07382ab0;
    plVar2[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
    lVar3 = FUN_04b212ac(uVar5,plVar2,DAT_091cbb90);
    if (lVar3 == 0) goto LAB_07382a44;
    local_38 = FUN_05237a6c(lVar3,DAT_091a7738);
    if (**(long **)(DAT_09184938 + 0xb8) == 0) goto LAB_07382a44;
    FUN_0636137c(**(long **)(DAT_09184938 + 0xb8),param_2,local_38,DAT_091bd440);
  }
  if (local_38 != 0) {
    (**(code **)(local_38 + 0x18))
              (*(undefined8 *)(local_38 + 0x40),param_1,*(undefined8 *)(local_38 + 0x28));
    return;
  }
LAB_07382a44:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

