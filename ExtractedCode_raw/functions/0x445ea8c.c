// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$GroupCells
// address: 0x445ea8c
// body: available
// range: 0x445ea8c-0x445ee9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445ee98 to 0x4b083f8 FUN_04b083f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x445ee9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__GroupCells(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09518032 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9fb8);
    FUN_03f5c2a4(&DAT_091ca8b8);
    FUN_03f5c2a4(&DAT_091ca298);
    FUN_03f5c2a4(&DAT_091cac20);
    FUN_03f5c2a4(&DAT_091cb0b8);
    FUN_03f5c2a4(&DAT_091cb3c8);
    FUN_03f5c2a4(&DAT_09178368);
    FUN_03f5c2a4(&DAT_09178380);
    FUN_03f5c2a4(&DAT_09178370);
    FUN_03f5c2a4(&DAT_09179560);
    FUN_03f5c2a4(&DAT_091e76b0);
    FUN_03f5c2a4(&DAT_091e76b8);
    FUN_03f5c2a4(&DAT_091e76c0);
    FUN_03f5c2a4(&DAT_091e76c8);
    FUN_03f5c2a4(&DAT_091e7b00);
    FUN_03f5c2a4(&DAT_0918f310);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518032 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f310);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass114_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    *(undefined4 *)(lVar1 + 0x10) = param_2;
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar4 = puVar2[100];
    if (lVar4 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar6 = *puVar2;
      lVar4 = thunk_FUN_03f9944c(DAT_09179560);
      FUN_05330e2c(lVar4,uVar6,DAT_091e76b0,0);
      lVar3 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar3 + 800) = lVar4;
      thunk_FUN_03f5d7b8(lVar3 + 800,lVar4);
    }
    uVar5 = FUN_04afaa90(uVar5,lVar4,DAT_091ca8b8);
    uVar6 = thunk_FUN_03f9944c(DAT_09178370);
    FUN_05310b64(uVar6,lVar1,DAT_091e7b00,0);
    uVar5 = FUN_04b0b5e0(uVar5,uVar6,DAT_091cb3c8);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar1 = puVar2[0x65];
    if (lVar1 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar6 = *puVar2;
      lVar1 = thunk_FUN_03f9944c(DAT_09178380);
      FUN_05311104(lVar1,uVar6,DAT_091e76b8,0);
      lVar4 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar4 + 0x328) = lVar1;
      thunk_FUN_03f5d7b8(lVar4 + 0x328,lVar1);
    }
    uVar5 = FUN_04aea684(uVar5,lVar1,DAT_091c9fb8);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar1 = puVar2[0x66];
    if (lVar1 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar6 = *puVar2;
      lVar1 = thunk_FUN_03f9944c(DAT_09178380);
      FUN_05311104(lVar1,uVar6,DAT_091e76c0,0);
      lVar4 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar4 + 0x330) = lVar1;
      thunk_FUN_03f5d7b8(lVar4 + 0x330,lVar1);
    }
    uVar5 = FUN_04b031b8(uVar5,lVar1,DAT_091cac20);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar1 = puVar2[0x67];
    if (lVar1 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar6 = *puVar2;
      lVar1 = thunk_FUN_03f9944c(DAT_09178368);
      FUN_05310938(lVar1,uVar6,DAT_091e76c8,0);
      lVar4 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar4 + 0x338) = lVar1;
      thunk_FUN_03f5d7b8(lVar4 + 0x338,lVar1);
    }
    uVar5 = FUN_04aefe30(uVar5,lVar1,DAT_091ca298);
    FUN_04b083f8(uVar5,DAT_091cb0b8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

