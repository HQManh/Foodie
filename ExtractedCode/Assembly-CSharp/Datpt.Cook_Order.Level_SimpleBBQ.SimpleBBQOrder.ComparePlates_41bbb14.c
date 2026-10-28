// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SimpleBBQOrder$$ComparePlates
// address: 0x41bbb14
// body: available
// range: 0x41bbb14-0x41bbeb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41bbe98 to 0x4afbb30 FUN_04afbb30 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41bbeb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Datpt_Cook_Order_Level_SimpleBBQ_SimpleBBQOrder__ComparePlates(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_09516971 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca080);
    FUN_03f5c2a4(&DAT_091ca6e8);
    FUN_03f5c2a4(&DAT_091ca6f0);
    FUN_03f5c2a4(&DAT_091caa28);
    FUN_03f5c2a4(&DAT_09178fb8);
    FUN_03f5c2a4(&DAT_091790b8);
    FUN_03f5c2a4(&DAT_09178fc0);
    FUN_03f5c2a4(&DAT_091b0180);
    FUN_03f5c2a4(&DAT_091b01a8);
    FUN_03f5c2a4(&DAT_091efff0);
    FUN_03f5c2a4(&DAT_091efff8);
    FUN_03f5c2a4(&DAT_091f0000);
    FUN_03f5c2a4(&DAT_091f0008);
    FUN_03f5c2a4(&DAT_091947b0);
    DAT_09516971 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x88);
  if (((lVar3 != 0) && (param_2 != 0)) && (*(long *)(param_2 + 0xf8) != 0)) {
    if (*(int *)(lVar3 + 0x18) == *(int *)(*(long *)(param_2 + 0xf8) + 0x18)) {
      if (*(int *)(DAT_091947b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar2 = *(undefined8 **)(DAT_091947b0 + 0xb8);
      lVar4 = puVar2[3];
      if (lVar4 == 0) {
        if (*(int *)(DAT_091947b0 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar2 = *(undefined8 **)(DAT_091947b0 + 0xb8);
        }
        uVar5 = *puVar2;
        lVar4 = thunk_FUN_03f9944c(DAT_09178fc0);
        FUN_05324070(lVar4,uVar5,DAT_091efff0,0);
        plVar1 = (long *)(*(long *)(DAT_091947b0 + 0xb8) + 0x18);
        *plVar1 = lVar4;
        thunk_FUN_03f5d7b8(plVar1,lVar4);
      }
      uVar5 = FUN_04af8044(lVar3,lVar4,DAT_091ca6f0);
      if (*(int *)(DAT_091947b0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091947b0);
      }
      puVar2 = *(undefined8 **)(DAT_091947b0 + 0xb8);
      lVar3 = puVar2[4];
      if (lVar3 == 0) {
        if (*(int *)(DAT_091947b0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091947b0);
          puVar2 = *(undefined8 **)(DAT_091947b0 + 0xb8);
        }
        uVar6 = *puVar2;
        lVar3 = thunk_FUN_03f9944c(DAT_091790b8);
        FUN_05324070(lVar3,uVar6,DAT_091efff8,0);
        plVar1 = (long *)(*(long *)(DAT_091947b0 + 0xb8) + 0x20);
        *plVar1 = lVar3;
        thunk_FUN_03f5d7b8(plVar1,lVar3);
      }
      uVar5 = FUN_04aeabc4(uVar5,lVar3,DAT_091ca080);
      uVar6 = *(undefined8 *)(param_2 + 0xf8);
      if (*(int *)(DAT_091947b0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091947b0);
      }
      puVar2 = *(undefined8 **)(DAT_091947b0 + 0xb8);
      lVar3 = puVar2[6];
      if (lVar3 == 0) {
        if (*(int *)(DAT_091947b0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091947b0);
          puVar2 = *(undefined8 **)(DAT_091947b0 + 0xb8);
        }
        uVar7 = *puVar2;
        lVar3 = thunk_FUN_03f9944c(DAT_09178fb8);
        FUN_05324070(lVar3,uVar7,DAT_091f0000,0);
        plVar1 = (long *)(*(long *)(DAT_091947b0 + 0xb8) + 0x30);
        *plVar1 = lVar3;
        thunk_FUN_03f5d7b8(plVar1,lVar3);
      }
      uVar6 = FUN_04af8044(uVar6,lVar3,DAT_091ca6e8);
      if (*(int *)(DAT_091947b0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091947b0);
      }
      puVar2 = *(undefined8 **)(DAT_091947b0 + 0xb8);
      lVar3 = puVar2[7];
      if (lVar3 == 0) {
        if (*(int *)(DAT_091947b0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091947b0);
          puVar2 = *(undefined8 **)(DAT_091947b0 + 0xb8);
        }
        uVar7 = *puVar2;
        lVar3 = thunk_FUN_03f9944c(DAT_091790b8);
        FUN_05324070(lVar3,uVar7,DAT_091f0008,0);
        plVar1 = (long *)(*(long *)(DAT_091947b0 + 0xb8) + 0x38);
        *plVar1 = lVar3;
        thunk_FUN_03f5d7b8(plVar1,lVar3);
      }
      uVar6 = FUN_04aeabc4(uVar6,lVar3,DAT_091ca080);
      uVar5 = FUN_04afbb30(uVar5,uVar6,DAT_091caa28);
      return uVar5;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

