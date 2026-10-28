// rea decompile_all
// name: MaxSdkBase.NetworkResponseInfo$$ToString
// address: 0x73747d4
// body: available
// range: 0x73747d4-0x7374adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7374adc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkBase_NetworkResponseInfo__ToString(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_54;
  
  if ((DAT_09520945 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca1c8);
    FUN_03f5c2a4(&DAT_091caed0);
    FUN_03f5c2a4(&DAT_09178148);
    FUN_03f5c2a4(&DAT_09192730);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f3280);
    FUN_03f5c2a4(&DAT_091968e0);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_091f88f0);
    FUN_03f5c2a4(&DAT_09213f60);
    FUN_03f5c2a4(&DAT_091f88a0);
    FUN_03f5c2a4(&DAT_091f8880);
    FUN_03f5c2a4(&DAT_09214720);
    FUN_03f5c2a4(&DAT_091f88d0);
    DAT_09520945 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(lVar2,DAT_09213f60,0);
  local_54 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_03f5c42c(DAT_09192730,&local_54);
  if (((lVar2 != 0) && (lVar2 = System_Text_StringBuilder__Append(lVar2,uVar3,0), lVar2 != 0)) &&
     (lVar4 = System_Text_StringBuilder__Append(lVar2,DAT_091f88f0,0), lVar4 != 0)) {
    System_Text_StringBuilder__Append(lVar4,*(undefined8 *)(param_1 + 0x18),0);
    lVar4 = System_Text_StringBuilder__Append(lVar2,DAT_091f8880,0);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_091968e0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091968e0);
    }
    uVar1 = DAT_091f86e8;
    puVar6 = *(undefined8 **)(DAT_091968e0 + 0xb8);
    lVar7 = puVar6[1];
    if (lVar7 == 0) {
      if (*(int *)(DAT_091968e0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091968e0);
        puVar6 = *(undefined8 **)(DAT_091968e0 + 0xb8);
      }
      uVar8 = *puVar6;
      lVar7 = thunk_FUN_03f9944c(DAT_09178148);
      FUN_053093b8(lVar7,uVar8,DAT_091f3280,0);
      plVar5 = (long *)(*(long *)(DAT_091968e0 + 0xb8) + 8);
      *plVar5 = lVar7;
      thunk_FUN_03f5d7b8(plVar5,lVar7);
    }
    uVar3 = FUN_04aecaa0(uVar3,lVar7,DAT_091ca1c8);
    uVar3 = FUN_04b049e4(uVar3,DAT_091caed0);
    uVar3 = System_String__Join(uVar1,uVar3,0);
    if (lVar4 != 0) {
      System_Text_StringBuilder__Append(lVar4,uVar3,0);
      if (*(int *)(param_1 + 0x10) == 1) {
        lVar4 = System_Text_StringBuilder__Append(lVar2,DAT_091f88d0,0);
        if (lVar4 == 0) goto LAB_07374adc;
        System_Text_StringBuilder__Append(lVar4,*(undefined8 *)(param_1 + 0x30),0);
      }
      else if (*(int *)(param_1 + 0x10) == 2) {
        lVar4 = System_Text_StringBuilder__Append(lVar2,DAT_091f88a0,0);
        if (lVar4 == 0) goto LAB_07374adc;
        System_Text_StringBuilder__Append(lVar4,*(undefined8 *)(param_1 + 0x38),0);
      }
      plVar5 = (long *)System_Text_StringBuilder__Append(lVar2,DAT_09214720,0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        return;
      }
    }
  }
LAB_07374adc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

