// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$Fingerprint
// address: 0x4470fe0
// body: available
// range: 0x4470fe0-0x4471e4b inclusive
// range: 0x4471e80-0x4471ec3 inclusive
// range: 0x4471ec8-0x4471ecb inclusive
// range: 0x4471ed0-0x4471ed3 inclusive
// range: 0x4471ed8-0x4471edf inclusive
// range: 0x4471ee4-0x4471ee7 inclusive
// range: 0x4471f68-0x4472547 inclusive
// range: 0x447254c-0x44725eb inclusive
// range: 0x4472630-0x44726cf inclusive
// range: 0x44726d4-0x44726d7 inclusive
// range: 0x44726dc-0x44726df inclusive
// range: 0x44726e4-0x44726e7 inclusive
// range: 0x44726ec-0x44726f3 inclusive
// range: 0x447276c-0x44729cf inclusive
// range: 0x44729d4-0x44729d7 inclusive
// range: 0x4472a38-0x4472be7 inclusive
// range: 0x4472c28-0x4472dc3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4471ec0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4471ec8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4471ed0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4471edc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4471ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4472544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44725e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44726cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44726d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44726dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44726e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44726f0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044726ec) */
/* WARNING: Removing unreachable block (ram,0x04472d98) */
/* WARNING: Removing unreachable block (ram,0x04472da8) */
/* WARNING: Removing unreachable block (ram,0x04471e38) */
/* WARNING: Removing unreachable block (ram,0x044725cc) */
/* WARNING: Removing unreachable block (ram,0x044729c4) */
/* WARNING: Removing unreachable block (ram,0x044729c8) */
/* WARNING: Removing unreachable block (ram,0x04471ed8) */
/* WARNING: Removing unreachable block (ram,0x04471ea8) */
/* WARNING: Removing unreachable block (ram,0x0447276c) */
/* WARNING: Removing unreachable block (ram,0x044726b0) */
/* WARNING: Removing unreachable block (ram,0x04472a60) */
/* WARNING: Removing unreachable block (ram,0x044727b0) */

undefined8 CookingGraph_CookingLevelSimulation__Fingerprint(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined8 local_1d0;
  long **pplStack_1c8;
  long *local_1c0;
  long **local_1b8;
  long *local_1b0;
  long **pplStack_1a8;
  long local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_178 [4];
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined1 local_160 [4];
  undefined1 local_15c [4];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  long *local_118;
  long *local_110;
  long **pplStack_108;
  long local_100;
  long *local_f0;
  long **pplStack_e8;
  long local_e0;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long **pplStack_b8;
  long local_b0;
  long *local_a0;
  long **pplStack_98;
  long local_90;
  long *local_80;
  long **pplStack_78;
  long local_70;
  long *local_68;
  
  if ((DAT_09518083 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9640);
    FUN_03f5c2a4(&DAT_091a1e28);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a2de0);
    FUN_03f5c2a4(&DAT_091a5108);
    FUN_03f5c2a4(&DAT_091a50d8);
    FUN_03f5c2a4(&DAT_091a2de8);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a5110);
    FUN_03f5c2a4(&DAT_091a1e30);
    FUN_03f5c2a4(&DAT_091a50e0);
    FUN_03f5c2a4(&DAT_091a5118);
    FUN_03f5c2a4(&DAT_091a1e38);
    FUN_03f5c2a4(&DAT_091a50e8);
    FUN_03f5c2a4(&DAT_091a2df0);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f8);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917aaa0);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b24e8);
    FUN_03f5c2a4(&DAT_091aa7c8);
    FUN_03f5c2a4(&DAT_091b2580);
    FUN_03f5c2a4(&DAT_091acf40);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189910);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_092240e8);
    FUN_03f5c2a4(&DAT_09218a80);
    FUN_03f5c2a4(&DAT_09221650);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_0921dc58);
    FUN_03f5c2a4(&DAT_0921ad60);
    FUN_03f5c2a4(&DAT_09222e88);
    FUN_03f5c2a4(&DAT_09218f78);
    FUN_03f5c2a4(&DAT_09220ae0);
    FUN_03f5c2a4(&DAT_09221000);
    FUN_03f5c2a4(&DAT_0921a818);
    FUN_03f5c2a4(&DAT_0921c820);
    FUN_03f5c2a4(&DAT_09219ad8);
    FUN_03f5c2a4(&DAT_0921c828);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_0921ae38);
    FUN_03f5c2a4(&DAT_0921a000);
    DAT_09518083 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  local_a0 = (long *)0x0;
  pplStack_98 = (long **)0x0;
  local_90 = 0;
  local_c0 = (long *)0x0;
  pplStack_b8 = (long **)0x0;
  local_b0 = 0;
  local_d0 = (long *)0x0;
  local_c8 = (long *)0x0;
  local_f0 = (long *)0x0;
  pplStack_e8 = (long **)0x0;
  local_e0 = 0;
  local_110 = (long *)0x0;
  pplStack_108 = (long **)0x0;
  local_100 = 0;
  local_118 = (long *)0x0;
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar3,DAT_09219ad8,0);
  local_68 = plVar3;
  thunk_FUN_03f5d7b8(&local_68,plVar3);
  if (param_2 != 0) {
    local_1d0 = CONCAT44(local_1d0._4_4_,*(undefined4 *)(param_2 + 0x40));
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_1d0);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(param_1 + 0x110));
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_140);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_16c = CONCAT31(local_16c._1_3_,*(undefined1 *)(param_1 + 0x148));
    uVar4 = FUN_03f5c42c(DAT_09535400,&local_16c);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_170 = CONCAT31(local_170._1_3_,*(undefined1 *)(param_1 + 0x149));
    uVar4 = FUN_03f5c42c(DAT_09535400,&local_170);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_174 = CONCAT31(local_174._1_3_,*(undefined1 *)(param_1 + 0x14a));
    uVar4 = FUN_03f5c42c(DAT_09535400,&local_174);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)(param_1 + 0x118));
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_148);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_150 = CONCAT44(local_150._4_4_,*(undefined4 *)(param_1 + 0x11c));
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_150);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_17c = CONCAT31(local_17c._1_3_,*(undefined1 *)(param_1 + 0x122));
    uVar4 = FUN_03f5c42c(DAT_09535400,&local_17c);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_180 = CONCAT31(local_180._1_3_,*(undefined1 *)(param_1 + 0x120));
    uVar4 = FUN_03f5c42c(DAT_09535400,&local_180);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_184 = CONCAT31(local_184._1_3_,*(undefined1 *)(param_1 + 0x121));
    uVar4 = FUN_03f5c42c(DAT_09535400,&local_184);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(param_1 + 0x124));
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_158);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_1b0 = *(long **)(param_1 + 0x128);
    uVar4 = FUN_03f5c42c(DAT_09535458,&local_1b0);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    local_1c0 = *(long **)(param_1 + 0x130);
    uVar4 = FUN_03f5c42c(DAT_09535458,&local_1c0);
    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
    lVar13 = *(long *)(param_1 + 0x150);
    if (lVar13 != 0) {
      if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
        uVar14 = 0;
        uVar7 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar14) goto LAB_04472d74;
          local_1b0 = (long *)CONCAT44(local_1b0._4_4_,*(undefined4 *)(lVar13 + 0x20 + uVar14 * 4));
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_1b0);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          uVar7 = (ulong)*(uint *)(lVar13 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)*(uint *)(lVar13 + 0x18));
      }
      lVar13 = *(long *)(param_1 + 0x180);
      if ((lVar13 != 0) && (lVar15 = *(long *)(lVar13 + 0x40), lVar15 != 0)) {
        local_11c[0] = *(undefined1 *)(lVar15 + 0x10);
        lVar13 = *(long *)(lVar13 + 0x48);
        uVar4 = FUN_03f5c42c(DAT_09535400,local_11c);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_120[0] = *(undefined1 *)(lVar15 + 0x11);
        uVar4 = FUN_03f5c42c(DAT_09535400,local_120);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_124[0] = *(undefined1 *)(lVar15 + 0x12);
        uVar4 = FUN_03f5c42c(DAT_09535400,local_124);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_128[0] = *(undefined1 *)(lVar15 + 0x13);
        uVar4 = FUN_03f5c42c(DAT_09535400,local_128);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_1b0 = *(long **)(lVar15 + 0x18);
        uVar4 = FUN_03f5c42c(DAT_09535458,&local_1b0);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_1c0 = *(long **)(lVar15 + 0x20);
        uVar4 = FUN_03f5c42c(DAT_09535458,&local_1c0);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_12c[0] = *(undefined1 *)(lVar15 + 0x28);
        uVar4 = FUN_03f5c42c(DAT_09535400,local_12c);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_130[0] = *(undefined1 *)(lVar15 + 0x29);
        uVar4 = FUN_03f5c42c(DAT_09535400,local_130);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_134[0] = *(undefined1 *)(lVar15 + 0x2a);
        uVar4 = FUN_03f5c42c(DAT_09535400,local_134);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_138[0] = *(undefined1 *)(lVar15 + 0x2b);
        uVar4 = FUN_03f5c42c(DAT_09535400,local_138);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_1d0 = *(undefined8 *)(lVar15 + 0x30);
        uVar4 = FUN_03f5c42c(DAT_09535458,&local_1d0);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_140 = *(undefined8 *)(lVar15 + 0x38);
        uVar4 = FUN_03f5c42c(DAT_09535458,&local_140);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_148 = *(undefined8 *)(lVar15 + 0x40);
        uVar4 = FUN_03f5c42c(DAT_09535458,&local_148);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_150 = *(undefined8 *)(lVar15 + 0x48);
        uVar4 = FUN_03f5c42c(DAT_09535458,&local_150);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_158 = *(undefined8 *)(lVar15 + 0x50);
        uVar4 = FUN_03f5c42c(DAT_09535458,&local_158);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        local_15c[0] = *(undefined1 *)(lVar15 + 0x58);
        uVar4 = FUN_03f5c42c(DAT_09535400,local_15c);
        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
        if (lVar13 != 0) {
          local_160[0] = *(undefined1 *)(lVar13 + 0x11);
          uVar4 = FUN_03f5c42c(DAT_09535400,local_160);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_164[0] = *(undefined1 *)(lVar13 + 0x12);
          uVar4 = FUN_03f5c42c(DAT_09535400,local_164);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_168[0] = *(undefined1 *)(lVar13 + 0x10);
          uVar4 = FUN_03f5c42c(DAT_09535400,local_168);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_16c = *(undefined4 *)(lVar13 + 0x14);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_16c);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_170 = *(undefined4 *)(lVar13 + 0x18);
          uVar4 = FUN_03f5c42c(DAT_09535450,&local_170);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_174 = *(undefined4 *)(lVar13 + 0x1c);
          uVar4 = FUN_03f5c42c(DAT_09535450,&local_174);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_178[0] = *(undefined1 *)(lVar13 + 0x13);
          uVar4 = FUN_03f5c42c(DAT_09535400,local_178);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_17c = *(undefined4 *)(lVar13 + 0x20);
          uVar4 = FUN_03f5c42c(DAT_09535450,&local_17c);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_180 = *(undefined4 *)(lVar13 + 0x24);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_180);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_184 = *(undefined4 *)(lVar13 + 0x28);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_184);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_188 = *(undefined4 *)(lVar13 + 0x2c);
          uVar4 = FUN_03f5c42c(DAT_09535450,&local_188);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_18c = *(undefined4 *)(lVar13 + 0x30);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_18c);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_190 = *(undefined4 *)(lVar13 + 0x34);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_190);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_194 = *(undefined4 *)(lVar13 + 0x38);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_194);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          local_198 = *(undefined4 *)(lVar13 + 0x3c);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_198);
          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
          if ((*(long *)(param_1 + 0x78) != 0) &&
             (lVar13 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar13 != 0)) {
            uVar1 = *(uint *)(lVar13 + 0x18);
            if (0 < (int)uVar1) {
              lVar15 = 0;
              do {
                if (uVar1 <= (uint)lVar15) goto LAB_04472d74;
                lVar8 = *(long *)(lVar13 + 0x20 + lVar15 * 8);
                if (lVar8 == 0) goto LAB_04472d78;
                CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                          (*(undefined8 *)(lVar8 + 0x18),&local_68);
                uVar1 = *(uint *)(lVar13 + 0x18);
                lVar15 = lVar15 + 1;
              } while ((int)lVar15 < (int)uVar1);
            }
            if ((*(long *)(param_1 + 0x78) != 0) &&
               (lVar13 = *(long *)(*(long *)(param_1 + 0x78) + 0x18), lVar13 != 0)) {
              uVar1 = *(uint *)(lVar13 + 0x18);
              if (0 < (int)uVar1) {
                lVar15 = 0;
                do {
                  if (uVar1 <= (uint)lVar15) goto LAB_04472d74;
                  lVar8 = *(long *)(lVar13 + 0x20 + lVar15 * 8);
                  if (lVar8 == 0) goto LAB_04472d78;
                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                            (*(undefined8 *)(lVar8 + 0x18),&local_68);
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  lVar15 = lVar15 + 1;
                } while ((int)lVar15 < (int)uVar1);
              }
              if ((*(long *)(param_1 + 0x78) != 0) &&
                 (lVar13 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar13 != 0)) {
                uVar1 = *(uint *)(lVar13 + 0x18);
                if (0 < (int)uVar1) {
                  uVar14 = 0;
                  do {
                    if (uVar1 <= uVar14) goto LAB_04472d74;
                    lVar15 = *(long *)(lVar13 + uVar14 * 8 + 0x20);
                    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                              (DAT_092240e8,&local_68);
                    if (lVar15 == 0) goto LAB_04472d78;
                    local_1b0 = *(long **)(lVar15 + 0x20);
                    uVar4 = FUN_03f5c42c(DAT_09535458,&local_1b0);
                    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
                    local_1c0 = (long *)CONCAT44(local_1c0._4_4_,*(undefined4 *)(lVar15 + 0x1c));
                    uVar4 = FUN_03f5c42c(DAT_09535420,&local_1c0);
                    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
                    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_04472d78;
                    local_1d0 = CONCAT44(local_1d0._4_4_,
                                         (int)*(undefined8 *)(*(long *)(lVar15 + 0x10) + 0x18));
                    uVar4 = FUN_03f5c42c(DAT_09535420,&local_1d0);
                    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(uVar4,&local_68);
                    lVar15 = *(long *)(lVar15 + 0x10);
                    if (lVar15 == 0) goto LAB_04472d78;
                    if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
                      uVar7 = 0;
                      uVar9 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                      do {
                        if (uVar9 <= uVar7) goto LAB_04472d74;
                        uVar10 = *(undefined8 *)(lVar15 + 0x20 + uVar7 * 8);
                        local_1b0 = (long *)CONCAT44(local_1b0._4_4_,(int)uVar10);
                        uVar4 = FUN_03f5c42c(DAT_09535420,&local_1b0);
                        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                  (uVar4,&local_68);
                        local_1c0 = (long *)CONCAT44(local_1c0._4_4_,(int)((ulong)uVar10 >> 0x20));
                        uVar4 = FUN_03f5c42c(DAT_09535420,&local_1c0);
                        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                  (uVar4,&local_68);
                        uVar9 = (ulong)*(uint *)(lVar15 + 0x18);
                        uVar7 = uVar7 + 1;
                      } while ((long)uVar7 < (long)(int)*(uint *)(lVar15 + 0x18));
                    }
                    uVar1 = *(uint *)(lVar13 + 0x18);
                    uVar14 = uVar14 + 1;
                  } while ((int)uVar14 < (int)uVar1);
                }
                if ((*(long *)(param_1 + 0x78) != 0) &&
                   (lVar13 = *(long *)(*(long *)(param_1 + 0x78) + 0x30), lVar13 != 0)) {
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (0 < (int)uVar1) {
                    uVar14 = 0;
                    do {
                      if (uVar1 <= uVar14) goto LAB_04472d74;
                      lVar15 = *(long *)(lVar13 + uVar14 * 8 + 0x20);
                      if (lVar15 == 0) goto LAB_04472d78;
                      uVar1 = *(uint *)(lVar15 + 0x18);
                      if (0 < (int)uVar1) {
                        uVar7 = 0;
                        do {
                          if (uVar1 <= uVar7) goto LAB_04472d74;
                          lVar8 = *(long *)(lVar15 + uVar7 * 8 + 0x20);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (DAT_09221650,&local_68);
                          if (lVar8 == 0) goto LAB_04472d78;
                          local_1c0 = (long *)CONCAT44(local_1c0._4_4_,*(undefined4 *)(lVar8 + 0x10)
                                                      );
                          uVar4 = FUN_03f5c42c(DAT_09535420,&local_1c0);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (uVar4,&local_68);
                          local_1d0 = CONCAT44(local_1d0._4_4_,*(undefined4 *)(lVar8 + 0x14));
                          uVar4 = FUN_03f5c42c(DAT_09535420,&local_1d0);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (uVar4,&local_68);
                          local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(lVar8 + 0x18));
                          uVar4 = FUN_03f5c42c(DAT_09535420,&local_140);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (uVar4,&local_68);
                          local_150 = CONCAT71(local_150._1_7_,*(undefined1 *)(lVar8 + 0x1c));
                          uVar4 = FUN_03f5c42c(DAT_09535400,&local_150);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (uVar4,&local_68);
                          local_158 = CONCAT71(local_158._1_7_,*(undefined1 *)(lVar8 + 0x1d));
                          uVar4 = FUN_03f5c42c(DAT_09535400,&local_158);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (uVar4,&local_68);
                          local_1b0 = *(long **)(lVar8 + 0x28);
                          uVar4 = FUN_03f5c42c(DAT_09535458,&local_1b0);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (uVar4,&local_68);
                          if (*(long *)(lVar8 + 0x30) == 0) goto LAB_04472d78;
                          local_148 = CONCAT44(local_148._4_4_,
                                               (int)*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x18))
                          ;
                          uVar4 = FUN_03f5c42c(DAT_09535420,&local_148);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (uVar4,&local_68);
                          lVar17 = *(long *)(lVar8 + 0x30);
                          if (lVar17 == 0) goto LAB_04472d78;
                          if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
                            uVar9 = 0;
                            uVar11 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
                            do {
                              if (uVar11 <= uVar9) goto LAB_04472d74;
                              uVar10 = *(undefined8 *)(lVar17 + 0x20 + uVar9 * 8);
                              local_1b0 = (long *)CONCAT44(local_1b0._4_4_,(int)uVar10);
                              uVar4 = FUN_03f5c42c(DAT_09535420,&local_1b0);
                              CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                        (uVar4,&local_68);
                              local_1c0 = (long *)CONCAT44(local_1c0._4_4_,
                                                           (int)((ulong)uVar10 >> 0x20));
                              uVar4 = FUN_03f5c42c(DAT_09535420,&local_1c0);
                              CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                        (uVar4,&local_68);
                              uVar11 = (ulong)*(uint *)(lVar17 + 0x18);
                              uVar9 = uVar9 + 1;
                            } while ((long)uVar9 < (long)(int)*(uint *)(lVar17 + 0x18));
                          }
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (DAT_09218a80,&local_68);
                          lVar8 = *(long *)(lVar8 + 0x38);
                          if (lVar8 == 0) goto LAB_04472d78;
                          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                            uVar9 = 0;
                            uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                            do {
                              if (uVar11 <= uVar9) goto LAB_04472d74;
                              local_1b0 = (long *)CONCAT44(local_1b0._4_4_,
                                                           *(undefined4 *)(lVar8 + 0x20 + uVar9 * 4)
                                                          );
                              uVar4 = FUN_03f5c42c(DAT_09535420,&local_1b0);
                              CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                        (uVar4,&local_68);
                              uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
                              uVar9 = uVar9 + 1;
                            } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
                          }
                          uVar1 = *(uint *)(lVar15 + 0x18);
                          uVar7 = uVar7 + 1;
                        } while ((int)uVar7 < (int)uVar1);
                      }
                      uVar14 = uVar14 + 1;
                      uVar1 = *(uint *)(lVar13 + 0x18);
                    } while ((int)uVar14 < (int)uVar1);
                  }
                  if ((*(long *)(param_1 + 0x78) != 0) &&
                     (lVar13 = *(long *)(*(long *)(param_1 + 0x78) + 0x40), lVar13 != 0)) {
                    uVar1 = *(uint *)(lVar13 + 0x18);
                    if (0 < (int)uVar1) {
                      uVar16 = 0;
                      do {
                        if (uVar1 <= uVar16) goto LAB_04472d74;
                        lVar15 = *(long *)(lVar13 + (long)(int)uVar16 * 8 + 0x20);
                        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                  (DAT_0921c828,&local_68);
                        if (lVar15 == 0) goto LAB_04472d78;
                        local_1c0 = (long *)CONCAT44(local_1c0._4_4_,*(undefined4 *)(lVar15 + 0x14))
                        ;
                        uVar4 = FUN_03f5c42c(DAT_09535420,&local_1c0);
                        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                  (uVar4,&local_68);
                        if (*(long *)(lVar15 + 0x20) == 0) goto LAB_04472d78;
                        local_1d0 = CONCAT44(local_1d0._4_4_,
                                             *(undefined4 *)(*(long *)(lVar15 + 0x20) + 0x20));
                        uVar4 = FUN_03f5c42c(DAT_09535420,&local_1d0);
                        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                  (uVar4,&local_68);
                        if ((*(long *)(lVar15 + 0x20) == 0) ||
                           (lVar15 = *(long *)(*(long *)(lVar15 + 0x20) + 0x28), lVar15 == 0))
                        goto LAB_04472d78;
                        FUN_057e185c(&local_1b0,lVar15,DAT_091acf40);
                        local_1c0 = (long *)0x0;
                        pplStack_78 = pplStack_1a8;
                        local_80 = local_1b0;
                        local_70 = local_1a0;
                        local_1b8 = &local_80;
                        while (uVar14 = FUN_071bd28c(&local_80,DAT_091a2de8), lVar15 = local_70,
                              plVar3 = local_1c0, (uVar14 & 1) != 0) {
                          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          uVar2 = CookingGraph_CookingGraphIndex__Ingredient
                                            (*(long *)(param_1 + 0x78),
                                             *(undefined8 *)(local_70 + 0x10),0);
                          local_1b0 = (long *)CONCAT44(local_1b0._4_4_,uVar2);
                          uVar4 = FUN_03f5c42c(DAT_09535420,&local_1b0);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (uVar4,&local_68);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (*(undefined8 *)(lVar15 + 0x20),&local_68);
                          uVar4 = *(undefined8 *)(lVar15 + 0x18);
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar14 = UnityEngine_Object__op_Equality(uVar4,0,0);
                          uVar2 = 0;
                          if ((uVar14 & 1) == 0) {
                            if (*(long *)(param_1 + 0x180) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            uVar2 = CookingGraph_CookingRuntimeSettings__MergeDurationFor
                                              (*(long *)(param_1 + 0x180),
                                               *(undefined8 *)(lVar15 + 0x10),
                                               *(undefined8 *)(lVar15 + 0x18),0);
                          }
                          local_1d0 = CONCAT44(local_1d0._4_4_,uVar2);
                          uVar4 = FUN_03f5c42c(DAT_09535450,&local_1d0);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (uVar4,&local_68);
                          if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          FUN_05797d74(&local_1b0,*(long *)(lVar15 + 0x28),DAT_091adcc0);
                          local_a0 = local_1b0;
                          local_1b0 = (long *)0x0;
                          pplStack_98 = pplStack_1a8;
                          local_90 = local_1a0;
                          pplStack_1a8 = &local_a0;
                          while (uVar14 = FUN_071ad7a4(&local_a0,DAT_091a34d8), (uVar14 & 1) != 0) {
                            local_1d0 = CONCAT44(local_1d0._4_4_,(undefined4)local_90);
                            uVar4 = FUN_03f5c42c(DAT_09535420,&local_1d0);
                            CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                      (uVar4,&local_68);
                          }
                          FUN_071ad7a0(&local_a0,DAT_091a34d0);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (DAT_09220ae0,&local_68);
                        }
                        FUN_071bd288(local_1b8,DAT_091a2de0);
                        if (plVar3 != (long *)0x0) goto LAB_04472d8c;
                        uVar1 = *(uint *)(lVar13 + 0x18);
                        uVar16 = uVar16 + 1;
                      } while ((int)uVar16 < (int)uVar1);
                    }
                    if ((*(long *)(param_1 + 0x78) != 0) &&
                       (lVar13 = *(long *)(*(long *)(param_1 + 0x78) + 0x50), lVar13 != 0)) {
                      uVar1 = *(uint *)(lVar13 + 0x18);
                      if (0 < (int)uVar1) {
                        uVar14 = 0;
                        do {
                          if (uVar1 <= uVar14) goto LAB_04472d74;
                          lVar15 = *(long *)(lVar13 + uVar14 * 8 + 0x20);
                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                    (DAT_09221000,&local_68);
                          if (lVar15 == 0) goto LAB_04472d78;
                          if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
                            uVar7 = 0;
                            uVar9 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                            do {
                              if (uVar9 <= uVar7) goto LAB_04472d74;
                              local_1b0 = (long *)CONCAT44(local_1b0._4_4_,
                                                           *(undefined4 *)
                                                            (lVar15 + 0x20 + uVar7 * 4));
                              uVar4 = FUN_03f5c42c(DAT_09535420,&local_1b0);
                              CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                        (uVar4,&local_68);
                              uVar9 = (ulong)*(uint *)(lVar15 + 0x18);
                              uVar7 = uVar7 + 1;
                            } while ((long)uVar7 < (long)(int)*(uint *)(lVar15 + 0x18));
                          }
                          uVar1 = *(uint *)(lVar13 + 0x18);
                          uVar14 = uVar14 + 1;
                        } while ((int)uVar14 < (int)uVar1);
                      }
                      if ((*(long *)(param_1 + 0x78) != 0) &&
                         (lVar13 = *(long *)(*(long *)(param_1 + 0x78) + 0x78), lVar13 != 0)) {
                        if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                          uVar14 = 0;
                          uVar7 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                          do {
                            if (uVar7 <= uVar14) goto LAB_04472d74;
                            local_1b0 = (long *)CONCAT44(local_1b0._4_4_,
                                                         *(undefined4 *)(lVar13 + 0x20 + uVar14 * 4)
                                                        );
                            uVar4 = FUN_03f5c42c(DAT_09535420,&local_1b0);
                            CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                      (uVar4,&local_68);
                            uVar7 = (ulong)*(uint *)(lVar13 + 0x18);
                            uVar14 = uVar14 + 1;
                          } while ((long)uVar14 < (long)(int)*(uint *)(lVar13 + 0x18));
                        }
                        if (*(long *)(param_1 + 0xa0) != 0) {
                          FUN_057e185c(&local_1b0,*(long *)(param_1 + 0xa0),DAT_091b24e8);
                          local_b0 = local_1a0;
                          pplStack_b8 = pplStack_1a8;
                          local_c0 = local_1b0;
                          local_1b0 = (long *)0x0;
                          pplStack_1a8 = &local_c0;
                          while (uVar14 = FUN_071bd28c(&local_c0,DAT_091a50e0), lVar13 = local_b0,
                                plVar3 = local_1b0, (uVar14 & 1) != 0) {
                            CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                      (DAT_0921a000,&local_68);
                            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)(lVar13 + 0x10));
                            uVar4 = FUN_03f5c42c(DAT_09535420,&local_148);
                            CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                      (uVar4,&local_68);
                            local_158 = CONCAT71(local_158._1_7_,*(undefined1 *)(lVar13 + 0x19));
                            uVar4 = FUN_03f5c42c(DAT_09535400,&local_158);
                            CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                      (uVar4,&local_68);
                            local_16c = CONCAT31(local_16c._1_3_,*(undefined1 *)(lVar13 + 0x18));
                            uVar4 = FUN_03f5c42c(DAT_09535400,&local_16c);
                            CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                      (uVar4,&local_68);
                            local_150 = CONCAT44(local_150._4_4_,*(undefined4 *)(lVar13 + 0x14));
                            uVar4 = FUN_03f5c42c(DAT_09535420,&local_150);
                            CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                      (uVar4,&local_68);
                            local_1c0 = *(long **)(lVar13 + 0x20);
                            uVar4 = FUN_03f5c42c(DAT_09535458,&local_1c0);
                            CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                      (uVar4,&local_68);
                            local_1d0 = *(undefined8 *)(lVar13 + 0x30);
                            uVar4 = FUN_03f5c42c(DAT_09535458,&local_1d0);
                            CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                      (uVar4,&local_68);
                            local_140 = *(undefined8 *)(lVar13 + 0x40);
                            uVar4 = FUN_03f5c42c(DAT_09535458,&local_140);
                            CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                      (uVar4,&local_68);
                            lVar13 = *(long *)(lVar13 + 0x50);
                            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            uVar1 = *(uint *)(lVar13 + 0x18);
                            if (0 < (int)uVar1) {
                              uVar16 = 0;
                              do {
                                if (uVar1 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c558();
                                }
                                lVar15 = *(long *)(lVar13 + (long)(int)uVar16 * 8 + 0x20);
                                CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                          (DAT_0921a818,&local_68);
                                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                                local_1c0 = (long *)CONCAT44(local_1c0._4_4_,
                                                             *(undefined4 *)(lVar15 + 0x10));
                                uVar4 = FUN_03f5c42c(DAT_09535420,&local_1c0);
                                CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                          (uVar4,&local_68);
                                local_1d0 = CONCAT44(local_1d0._4_4_,*(undefined4 *)(lVar15 + 0x14))
                                ;
                                uVar4 = FUN_03f5c42c(DAT_09535420,&local_1d0);
                                CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                          (uVar4,&local_68);
                                plVar3 = (long *)FUN_04ad43f0(*(undefined8 *)(lVar15 + 0x28),
                                                              *(undefined8 *)(lVar15 + 0x20),
                                                              DAT_091c9640);
                                if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                                lVar15 = *plVar3;
                                uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
                                if (uVar14 != 0) {
                                  piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar12 + -2) == DAT_0917a3f8) {
                                      puVar5 = (undefined8 *)
                                               (lVar15 + (long)*piVar12 * 0x10 + 0x138);
                                      goto LAB_044722b0;
                                    }
                                    uVar14 = uVar14 - 1;
                                    piVar12 = piVar12 + 4;
                                  } while (uVar14 != 0);
                                }
                                puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a3f8,0);
LAB_044722b0:
                                local_c8 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
                                local_1b8 = &local_c8;
                                local_1c0 = (long *)0x0;
LAB_044722c8:
                                plVar3 = local_c8;
                                if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                                lVar15 = *local_c8;
                                uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
                                if (uVar14 != 0) {
                                  piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                                      puVar5 = (undefined8 *)
                                               (lVar15 + (long)*piVar12 * 0x10 + 0x138);
                                      goto LAB_0447231c;
                                    }
                                    uVar14 = uVar14 - 1;
                                    piVar12 = piVar12 + 4;
                                  } while (uVar14 != 0);
                                }
                                puVar5 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185b10,0);
LAB_0447231c:
                                uVar14 = (*(code *)*puVar5)(plVar3,puVar5[1]);
                                plVar3 = local_c8;
                                if ((uVar14 & 1) != 0) {
                                  if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                  lVar15 = *local_c8;
                                  uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
                                  if (uVar14 != 0) {
                                    piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar12 + -2) == DAT_0917aaa0) {
                                        puVar5 = (undefined8 *)
                                                 (lVar15 + (long)*piVar12 * 0x10 + 0x138);
                                        goto LAB_04472380;
                                      }
                                      uVar14 = uVar14 - 1;
                                      piVar12 = piVar12 + 4;
                                    } while (uVar14 != 0);
                                  }
                                  puVar5 = (undefined8 *)FUN_03f95da8(local_c8,DAT_0917aaa0,0);
LAB_04472380:
                                  lVar15 = (*(code *)*puVar5)(plVar3,puVar5[1]);
                                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                  local_140 = CONCAT44(local_140._4_4_,
                                                       *(undefined4 *)(lVar15 + 0x10));
                                  uVar4 = FUN_03f5c42c(DAT_09535420,&local_140);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (uVar4,&local_68);
                                  local_148 = CONCAT44(local_148._4_4_,
                                                       *(undefined4 *)(lVar15 + 0x14));
                                  uVar4 = FUN_03f5c42c(DAT_09535420,&local_148);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (uVar4,&local_68);
                                  local_1d0 = *(undefined8 *)(lVar15 + 0x20);
                                  uVar4 = FUN_03f5c42c(DAT_09535458,&local_1d0);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (uVar4,&local_68);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (*(undefined8 *)(lVar15 + 0x18),&local_68);
                                  plVar3 = *(long **)(lVar15 + 0x28);
                                  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                  lVar15 = *plVar3;
                                  uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
                                  if (uVar14 != 0) {
                                    piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar12 + -2) == DAT_0917a5c0) {
                                        puVar5 = (undefined8 *)
                                                 (lVar15 + (long)*piVar12 * 0x10 + 0x138);
                                        goto LAB_04472448;
                                      }
                                      uVar14 = uVar14 - 1;
                                      piVar12 = piVar12 + 4;
                                    } while (uVar14 != 0);
                                  }
                                  puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a5c0,0);
LAB_04472448:
                                  plVar3 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
                                  local_1d0 = 0;
                                  pplStack_1c8 = &local_d0;
                                  do {
                                    local_d0 = plVar3;
                                    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03f5c550();
                                    }
                                    lVar15 = *plVar3;
                                    uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
                                    if (uVar14 != 0) {
                                      piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                                          puVar5 = (undefined8 *)
                                                   (lVar15 + (long)*piVar12 * 0x10 + 0x138);
                                          goto LAB_044724b0;
                                        }
                                        uVar14 = uVar14 - 1;
                                        piVar12 = piVar12 + 4;
                                      } while (uVar14 != 0);
                                    }
                                    puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_044724b0:
                                    uVar14 = (*(code *)*puVar5)(plVar3,puVar5[1]);
                                    plVar3 = local_d0;
                                    if ((uVar14 & 1) == 0) goto LAB_0447254c;
                                    if (local_d0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03f5c550();
                                    }
                                    lVar15 = *local_d0;
                                    uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
                                    if (uVar14 != 0) {
                                      piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar12 + -2) == DAT_0917ac88) {
                                          puVar5 = (undefined8 *)
                                                   (lVar15 + (long)*piVar12 * 0x10 + 0x138);
                                          goto LAB_04472514;
                                        }
                                        uVar14 = uVar14 - 1;
                                        piVar12 = piVar12 + 4;
                                      } while (uVar14 != 0);
                                    }
                                    puVar5 = (undefined8 *)FUN_03f95da8(local_d0,DAT_0917ac88,0);
LAB_04472514:
                                    uVar2 = (*(code *)*puVar5)(plVar3,puVar5[1]);
                                    local_140 = CONCAT44(local_140._4_4_,uVar2);
                                    uVar4 = FUN_03f5c42c(DAT_09535420,&local_140);
                                    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                              (uVar4,&local_68);
                                    plVar3 = local_d0;
                                  } while( true );
                                }
                                plVar3 = *local_1b8;
                                if (plVar3 != (long *)0x0) {
                                  lVar15 = *plVar3;
                                  uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
                                  if (uVar14 == 0) {
LAB_04472678:
                                    puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
                                  }
                                  else {
                                    piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                    while (*(long *)(piVar12 + -2) != DAT_09185a58) {
                                      uVar14 = uVar14 - 1;
                                      piVar12 = piVar12 + 4;
                                      if (uVar14 == 0) goto LAB_04472678;
                                    }
                                    puVar5 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
                                  }
                                  (*(code *)*puVar5)(plVar3,puVar5[1]);
                                }
                                if (local_1c0 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c548();
                                }
                                uVar16 = uVar16 + 1;
                                uVar1 = *(uint *)(lVar13 + 0x18);
                              } while ((int)uVar16 < (int)uVar1);
                            }
                          }
                          FUN_071bd288(pplStack_1a8,DAT_091a50d8);
                          if (plVar3 != (long *)0x0) {
LAB_04472d8c:
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c548(plVar3);
                          }
                          if (*(long *)(param_1 + 0x80) != 0) {
                            FUN_057e185c(&local_1b0,*(long *)(param_1 + 0x80),DAT_091aa7c8);
                            local_1b8 = &local_f0;
                            pplStack_e8 = pplStack_1a8;
                            local_f0 = local_1b0;
                            local_e0 = local_1a0;
                            local_1c0 = (long *)0x0;
                            while (uVar14 = FUN_071bd28c(&local_f0,DAT_091a1e30), lVar13 = local_e0,
                                  plVar3 = local_1c0, (uVar14 & 1) != 0) {
                              CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                        (DAT_09218f78,&local_68);
                              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_03f5c550();
                              }
                              FUN_057e185c(&local_1b0,lVar13,DAT_091b2580);
                              local_110 = local_1b0;
                              local_1b0 = (long *)0x0;
                              pplStack_108 = pplStack_1a8;
                              local_100 = local_1a0;
                              pplStack_1a8 = &local_110;
                              while (uVar14 = FUN_071bd28c(&local_110,DAT_091a5110),
                                    lVar13 = local_100, (uVar14 & 1) != 0) {
                                puVar5 = &DAT_0921ae38;
                                if (local_100 != 0) {
                                  local_1d0 = CONCAT44(local_1d0._4_4_,
                                                       *(undefined4 *)(local_100 + 0x18));
                                  uVar4 = FUN_03f5c42c(DAT_09535420,&local_1d0);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (uVar4,&local_68);
                                  local_140 = CONCAT44(local_140._4_4_,
                                                       *(undefined4 *)(lVar13 + 0x1c));
                                  uVar4 = FUN_03f5c42c(DAT_09535420,&local_140);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (uVar4,&local_68);
                                  local_148 = CONCAT44(local_148._4_4_,
                                                       *(undefined4 *)(lVar13 + 0x28));
                                  uVar4 = FUN_03f5c42c(DAT_09535420,&local_148);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (uVar4,&local_68);
                                  local_150 = CONCAT44(local_150._4_4_,
                                                       *(undefined4 *)(lVar13 + 0x20));
                                  uVar4 = FUN_03f5c42c(DAT_09535420,&local_150);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (uVar4,&local_68);
                                  local_158 = CONCAT44(local_158._4_4_,
                                                       *(undefined4 *)(lVar13 + 0x24));
                                  uVar4 = FUN_03f5c42c(DAT_09535420,&local_158);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (uVar4,&local_68);
                                  local_16c = CONCAT31(local_16c._1_3_,
                                                       *(undefined1 *)(lVar13 + 0x31));
                                  uVar4 = FUN_03f5c42c(DAT_09535400,&local_16c);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (uVar4,&local_68);
                                  local_170 = CONCAT31(local_170._1_3_,
                                                       *(undefined1 *)(lVar13 + 0x30));
                                  uVar4 = FUN_03f5c42c(DAT_09535400,&local_170);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (uVar4,&local_68);
                                  lVar13 = *(long *)(lVar13 + 0x38);
                                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                  puVar5 = &DAT_0921dc58;
                                  if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                                    uVar14 = 0;
                                    uVar7 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                                    do {
                                      if (uVar7 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c558();
                                      }
                                      local_1d0 = CONCAT44(local_1d0._4_4_,
                                                           *(undefined4 *)
                                                            (lVar13 + 0x20 + uVar14 * 4));
                                      uVar4 = FUN_03f5c42c(DAT_09535420,&local_1d0);
                                      CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                                (uVar4,&local_68);
                                      uVar7 = (ulong)*(uint *)(lVar13 + 0x18);
                                      uVar14 = uVar14 + 1;
                                    } while ((long)uVar14 < (long)(int)*(uint *)(lVar13 + 0x18));
                                  }
                                }
                                CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                          (*puVar5,&local_68);
                              }
                              FUN_071bd288(&local_110,DAT_091a5108);
                            }
                            FUN_071bd288(local_1b8,DAT_091a1e28);
                            if (plVar3 != (long *)0x0) goto LAB_04472d8c;
                            lVar13 = *(long *)(param_1 + 0x88);
                            if (lVar13 != 0) {
                              if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                                uVar14 = 0;
                                uVar7 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                                do {
                                  if (uVar7 <= uVar14) goto LAB_04472d74;
                                  local_1b0 = (long *)CONCAT44(local_1b0._4_4_,
                                                               *(undefined4 *)
                                                                (lVar13 + 0x20 + uVar14 * 4));
                                  uVar4 = FUN_03f5c42c(DAT_09189910,&local_1b0);
                                  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                            (uVar4,&local_68);
                                  uVar7 = (ulong)*(uint *)(lVar13 + 0x18);
                                  uVar14 = uVar14 + 1;
                                } while ((long)uVar14 < (long)(int)*(uint *)(lVar13 + 0x18));
                              }
                              lVar13 = *(long *)(param_1 + 0x90);
                              if (lVar13 != 0) {
                                uVar1 = *(uint *)(lVar13 + 0x18);
                                if (0 < (int)uVar1) {
                                  uVar14 = 0;
                                  do {
                                    if (uVar1 <= uVar14) {
LAB_04472d74:
                    /* WARNING: Subroutine does not return */
                                      FUN_03f5c558();
                                    }
                                    lVar15 = *(long *)(lVar13 + uVar14 * 8 + 0x20);
                                    CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                              (DAT_0921c820,&local_68);
                                    if (lVar15 == 0) goto LAB_04472d78;
                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                    if (0 < (int)uVar1) {
                                      uVar16 = 0;
                                      do {
                                        if (uVar1 <= uVar16) goto LAB_04472d74;
                                        lVar8 = *(long *)(lVar15 + (long)(int)uVar16 * 8 + 0x20);
                                        if (lVar8 == 0) goto LAB_04472d78;
                                        local_1c0 = (long *)CONCAT44(local_1c0._4_4_,
                                                                     *(undefined4 *)(lVar8 + 0x10));
                                        uVar4 = FUN_03f5c42c(DAT_09535420,&local_1c0);
                                        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                                  (uVar4,&local_68);
                                        if (*(long *)(lVar8 + 0x18) == 0) goto LAB_04472d78;
                                        FUN_05797d74(&local_1b0,*(long *)(lVar8 + 0x18),DAT_091adcc0
                                                    );
                                        local_a0 = local_1b0;
                                        local_1b0 = (long *)0x0;
                                        pplStack_98 = pplStack_1a8;
                                        local_90 = local_1a0;
                                        pplStack_1a8 = &local_a0;
                                        while (uVar7 = FUN_071ad7a4(&local_a0,DAT_091a34d8),
                                              (uVar7 & 1) != 0) {
                                          local_1c0 = (long *)CONCAT44(local_1c0._4_4_,
                                                                       (undefined4)local_90);
                                          uVar4 = FUN_03f5c42c(DAT_09535420,&local_1c0);
                                          CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                                    (uVar4,&local_68);
                                        }
                                        FUN_071ad7a0(&local_a0,DAT_091a34d0);
                                        CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0
                                                  (DAT_0921ad60,&local_68);
                                        uVar1 = *(uint *)(lVar15 + 0x18);
                                        uVar16 = uVar16 + 1;
                                      } while ((int)uVar16 < (int)uVar1);
                                    }
                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                    uVar14 = uVar14 + 1;
                                  } while ((int)uVar14 < (int)uVar1);
                                }
                                plVar3 = (long *)System_Security_Cryptography_SHA256__Create(0);
                                pplStack_1a8 = &local_118;
                                local_1b0 = (long *)0x0;
                                local_118 = plVar3;
                                plVar6 = (long *)System_Text_Encoding__get_UTF8(0);
                                if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                                uVar4 = (**(code **)(*local_68 + 0x168))
                                                  (local_68,*(undefined8 *)(*local_68 + 0x170));
                                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550(uVar4,uVar4);
                                }
                                uVar4 = (**(code **)(*plVar6 + 600))
                                                  (plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x260));
                                if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550(uVar4,uVar4);
                                }
                                uVar4 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                                                  (plVar3,uVar4,0);
                                lVar13 = System_BitConverter__ToString(uVar4,0);
                                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                                lVar13 = System_String__Replace(lVar13,DAT_091f8a38,DAT_091f5700,0);
                                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                                uVar4 = System_String__ToLowerInvariant(lVar13,0);
                                plVar3 = local_118;
                                if (local_118 != (long *)0x0) {
                                  lVar13 = *local_118;
                                  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                                  if (uVar14 != 0) {
                                    piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar12 + -2) == DAT_09185a58) {
                                        puVar5 = (undefined8 *)
                                                 (lVar13 + (long)*piVar12 * 0x10 + 0x138);
                                        goto LAB_04472d40;
                                      }
                                      uVar14 = uVar14 - 1;
                                      piVar12 = piVar12 + 4;
                                    } while (uVar14 != 0);
                                  }
                                  puVar5 = (undefined8 *)FUN_03f95da8(local_118,DAT_09185a58,0);
LAB_04472d40:
                                  (*(code *)*puVar5)(plVar3,puVar5[1]);
                                }
                                return uVar4;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04472d78:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_0447254c:
  if (local_d0 != (long *)0x0) {
    lVar15 = *local_d0;
    uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar14 != 0) {
      piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185a58) {
          puVar5 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_044725b4;
        }
        uVar14 = uVar14 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar14 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_d0,DAT_09185a58,0);
LAB_044725b4:
    (*(code *)*puVar5)(plVar3,puVar5[1]);
  }
  CookingGraph_CookingLevelSimulation__<Fingerprint>g__Add_313_0(DAT_09222e88,&local_68);
  goto LAB_044722c8;
}

