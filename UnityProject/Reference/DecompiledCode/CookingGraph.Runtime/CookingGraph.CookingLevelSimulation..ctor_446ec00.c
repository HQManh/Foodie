// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$.ctor
// address: 0x446ec00
// body: available
// range: 0x446ec00-0x4470783 inclusive
// range: 0x4470788-0x447078b inclusive
// range: 0x44707d8-0x4470ea7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x446fbf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4470780 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4470788 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4470d1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4470d20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4470d24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4470d28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4470d2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4470d30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4470d34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4470d38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4470d3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation___ctor
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  undefined8 uVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 *puStack_1a0;
  long local_198;
  undefined8 local_190;
  undefined8 *puStack_188;
  undefined8 local_180;
  undefined8 *puStack_178;
  long local_170;
  undefined8 local_160;
  undefined8 *puStack_158;
  long local_150;
  undefined8 local_140;
  undefined8 *puStack_138;
  long local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 *puStack_f8;
  long local_f0;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  
  if ((DAT_09518068 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174c78);
    FUN_03f5c2a4(&DAT_091c0138);
    FUN_03f5c2a4(&DAT_091c6630);
    FUN_03f5c2a4(&DAT_09182da0);
    FUN_03f5c2a4(&DAT_091c6858);
    FUN_03f5c2a4(&DAT_091c6870);
    FUN_03f5c2a4(&DAT_091c6878);
    FUN_03f5c2a4(&DAT_0918f660);
    FUN_03f5c2a4(&DAT_0919e458);
    FUN_03f5c2a4(&DAT_0919cb28);
    FUN_03f5c2a4(&DAT_0919e5f8);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_0919f1a8);
    FUN_03f5c2a4(&DAT_0919e480);
    FUN_03f5c2a4(&DAT_0919e630);
    FUN_03f5c2a4(&DAT_0919e4e0);
    FUN_03f5c2a4(&DAT_0919c180);
    FUN_03f5c2a4(&DAT_09175f60);
    FUN_03f5c2a4(&DAT_09176718);
    FUN_03f5c2a4(&DAT_09176960);
    FUN_03f5c2a4(&DAT_091766c8);
    FUN_03f5c2a4(&DAT_09176710);
    FUN_03f5c2a4(&DAT_091766d0);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091766e8);
    FUN_03f5c2a4(&DAT_09176168);
    FUN_03f5c2a4(&DAT_091c9480);
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_091c9890);
    FUN_03f5c2a4(&DAT_091c98c8);
    FUN_03f5c2a4(&DAT_091c9cd0);
    FUN_03f5c2a4(&DAT_091c9b98);
    FUN_03f5c2a4(&DAT_091ca3f8);
    FUN_03f5c2a4(&DAT_091ca428);
    FUN_03f5c2a4(&DAT_091ca4b0);
    FUN_03f5c2a4(&DAT_091ca518);
    FUN_03f5c2a4(&DAT_091ca568);
    FUN_03f5c2a4(&DAT_091ca6a0);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_091caf30);
    FUN_03f5c2a4(&DAT_091cad08);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091caec0);
    FUN_03f5c2a4(&DAT_091cb480);
    FUN_03f5c2a4(&DAT_091a3e90);
    FUN_03f5c2a4(&DAT_091a3398);
    FUN_03f5c2a4(&DAT_091a33a0);
    FUN_03f5c2a4(&DAT_091a3e98);
    FUN_03f5c2a4(&DAT_091a33a8);
    FUN_03f5c2a4(&DAT_091a3ea0);
    FUN_03f5c2a4(&DAT_09178878);
    FUN_03f5c2a4(&DAT_09178990);
    FUN_03f5c2a4(&DAT_09178ee8);
    FUN_03f5c2a4(&DAT_091788a0);
    FUN_03f5c2a4(&DAT_09178b10);
    FUN_03f5c2a4(&DAT_09179338);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178820);
    FUN_03f5c2a4(&DAT_09178bb8);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_091a82f8);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091b24e0);
    FUN_03f5c2a4(&DAT_091aa7b0);
    FUN_03f5c2a4(&DAT_091b2570);
    FUN_03f5c2a4(&DAT_091ada70);
    FUN_03f5c2a4(&DAT_091af488);
    FUN_03f5c2a4(&DAT_091aa7a8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b2568);
    FUN_03f5c2a4(&DAT_091b2518);
    FUN_03f5c2a4(&DAT_091b24d8);
    FUN_03f5c2a4(&DAT_091b25a8);
    FUN_03f5c2a4(&DAT_091abf88);
    FUN_03f5c2a4(&DAT_091abfe0);
    FUN_03f5c2a4(&DAT_091af4b0);
    FUN_03f5c2a4(&DAT_091ac200);
    FUN_03f5c2a4(&DAT_091af4d8);
    FUN_03f5c2a4(&DAT_091af4b8);
    FUN_03f5c2a4(&DAT_091af4e0);
    FUN_03f5c2a4(&DAT_091ac208);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917d260);
    FUN_03f5c2a4(&DAT_0917d258);
    FUN_03f5c2a4(&DAT_0917baa0);
    FUN_03f5c2a4(&DAT_0917d278);
    FUN_03f5c2a4(&DAT_0917bf40);
    FUN_03f5c2a4(&DAT_0917d270);
    FUN_03f5c2a4(&DAT_0917bf50);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918f680);
    FUN_03f5c2a4(&DAT_09189a90);
    FUN_03f5c2a4(&DAT_091e7470);
    FUN_03f5c2a4(&DAT_091e7480);
    FUN_03f5c2a4(&DAT_091e7488);
    FUN_03f5c2a4(&DAT_091e7490);
    FUN_03f5c2a4(&DAT_091e7478);
    FUN_03f5c2a4(&DAT_091e7498);
    FUN_03f5c2a4(&DAT_091e74a0);
    FUN_03f5c2a4(&DAT_091e74b0);
    FUN_03f5c2a4(&DAT_091e74b8);
    FUN_03f5c2a4(&DAT_091e74c0);
    FUN_03f5c2a4(&DAT_091e74c8);
    FUN_03f5c2a4(&DAT_091e7d48);
    FUN_03f5c2a4(&DAT_0918f4c0);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_09208de8);
    DAT_09518068 = 1;
  }
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_100 = 0;
  puStack_f8 = (undefined8 *)0x0;
  local_f0 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uVar9 = thunk_FUN_03f9944c(DAT_091766e8);
  FUN_06f52618(uVar9,DAT_0919e4e0);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_09176960);
  FUN_06fd76bc(uVar9,DAT_0919f1a8);
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_0917bf50);
  FUN_0573ede8(uVar9,DAT_091abfe0);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(uVar9,DAT_091a8298);
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(uVar9,DAT_091a8298);
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_0917d260);
  FUN_057e0400(uVar9,DAT_091b2518);
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_091766d0);
  FUN_06f4ed60(uVar9,DAT_0919e480);
  *(undefined8 *)(param_1 + 0x68) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),uVar9);
  lVar10 = thunk_FUN_03f9944c(DAT_0917baa0);
  FUN_057e0400(lVar10,DAT_091aa7a8);
  plVar11 = (long *)(param_1 + 0x80);
  *plVar11 = lVar10;
  thunk_FUN_03f5d7b8(plVar11,lVar10);
  uVar9 = thunk_FUN_03f9944c(DAT_0917d258);
  FUN_057e0400(uVar9,DAT_091b24d8);
  *(undefined8 *)(param_1 + 0x98) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x98),uVar9);
  lVar10 = thunk_FUN_03f9944c(DAT_0917d258);
  FUN_057e0400(lVar10,DAT_091b24d8);
  plVar12 = (long *)(param_1 + 0xa0);
  *plVar12 = lVar10;
  thunk_FUN_03f5d7b8(plVar12,lVar10);
  uVar9 = thunk_FUN_03f9944c(DAT_0917d258);
  FUN_057e0400(uVar9,DAT_091b24d8);
  *(undefined8 *)(param_1 + 0xa8) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_09175f60);
  FUN_06e4b1a0(uVar9,DAT_0919c180);
  *(undefined8 *)(param_1 + 0xb0) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb0),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_09176718);
  FUN_06f52618(uVar9,DAT_0919e630);
  *(undefined8 *)(param_1 + 0xb8) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb8),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_09176710);
  FUN_06f52618(uVar9,DAT_0919e5f8);
  *(undefined8 *)(param_1 + 0xc0) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_09179e20);
  FUN_053e1118(uVar9,DAT_091a82f8);
  *(undefined8 *)(param_1 + 200) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 200),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_091766c8);
  FUN_06f4b670(uVar9,DAT_0919e458);
  *(undefined8 *)(param_1 + 0xd0) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd0),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_091764a0);
  FUN_06ee539c(uVar9,DAT_0919d948);
  *(undefined8 *)(param_1 + 0xd8) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd8),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_09176168);
  FUN_06fc96ac(uVar9,DAT_0919cb28);
  *(undefined8 *)(param_1 + 0xe0) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xe0),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(uVar9,DAT_091adc70);
  *(undefined8 *)(param_1 + 0xe8) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xe8),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_0917d278);
  FUN_057e0400(uVar9,DAT_091b25a8);
  *(undefined8 *)(param_1 + 0xf0) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf0),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(uVar9,DAT_091a8298);
  *(undefined8 *)(param_1 + 0xf8) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf8),uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_0917bf40);
  FUN_057e0400(uVar9,DAT_091abf88);
  *(undefined8 *)(param_1 + 0x100) = uVar9;
  thunk_FUN_03f5d7b8(param_1 + 0x100,uVar9);
  *(undefined8 *)(param_1 + 0x158) = 1;
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  System_Object___ctor(param_1,0);
  if (param_2 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar13 = UnityEngine_Object__op_Equality(uVar9,0,0);
    if ((uVar13 & 1) == 0) {
      if (*(long *)(param_2 + 0x10) == 0) {
LAB_0446fbf4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = CookingGraph_CookingGraphAsset__ResolveRuntimeSettings
                        (*(long *)(param_2 + 0x10),param_3,param_4,param_5,0);
      *(undefined8 *)(param_1 + 0x180) = uVar9;
      thunk_FUN_03f5d7b8(param_1 + 0x180,uVar9);
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      uVar22 = *(undefined8 *)(param_1 + 0x180);
      lVar10 = thunk_FUN_03f9944c(DAT_09182da0);
      CookingGraph_CookingGraphIndex___ctor(lVar10,uVar9,uVar22,0);
      plVar14 = (long *)(param_1 + 0x78);
      *plVar14 = lVar10;
      thunk_FUN_03f5d7b8(plVar14,lVar10);
      if (*(long *)(param_1 + 0x180) == 0) goto LAB_0446fbf4;
      uVar9 = CookingGraph_CookingRuntimeSettings__CreateExecution(*(long *)(param_1 + 0x180),0);
      *(undefined8 *)(param_1 + 0x178) = uVar9;
      thunk_FUN_03f5d7b8(param_1 + 0x178,uVar9);
      lVar10 = *(long *)(param_1 + 0x178);
      uVar9 = thunk_FUN_03f9944c(DAT_09174c78);
      FUN_071cb5dc(uVar9,param_1,DAT_091c6870,0);
      if (lVar10 == 0) goto LAB_0446fbf4;
      CookingGraph_Execution_CookingExecution__add_InventoryArrived(lVar10,uVar9,0);
      lVar10 = *(long *)(param_1 + 0x178);
      uVar9 = thunk_FUN_03f9944c(DAT_09174c78);
      FUN_071cb5dc(uVar9,param_1,DAT_091c6858,0);
      if (lVar10 == 0) goto LAB_0446fbf4;
      CookingGraph_Execution_CookingExecution__add_InventoryArrived(lVar10,uVar9,0);
      lVar10 = *(long *)(param_1 + 0x178);
      uVar9 = thunk_FUN_03f9944c(DAT_09174c78);
      FUN_071cb5dc(uVar9,param_1,DAT_091c6878,0);
      if (lVar10 == 0) goto LAB_0446fbf4;
      CookingGraph_Execution_CookingExecution__add_InventoryArrived(lVar10,uVar9,0);
      uVar9 = DAT_09189a90;
      *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x3c);
      *(undefined2 *)(param_1 + 0x149) = *(undefined2 *)(param_2 + 0x3d);
      uVar6 = *(undefined4 *)(param_2 + 0x40);
      uVar9 = thunk_FUN_03f9944c(uVar9);
      System_Random___ctor(uVar9,uVar6,0);
      *(undefined8 *)(param_1 + 0x108) = uVar9;
      thunk_FUN_03f5d7b8(param_1 + 0x108,uVar9);
      if ((*(long *)(param_1 + 0x180) == 0) ||
         (lVar10 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar10 == 0)) goto LAB_0446fbf4;
      uVar6 = *(undefined4 *)(lVar10 + 0x14);
      uVar1 = *(undefined4 *)(param_2 + 0x38);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar5 = System_Math__Min(uVar6,uVar1,0);
      *(int *)(param_1 + 0x110) = iVar5;
      if (iVar5 < 1) {
        if ((*(long *)(param_2 + 0x28) == 0) ||
           (lVar10 = *(long *)(*(long *)(param_2 + 0x28) + 0x10), lVar10 == 0)) goto LAB_0446fbf4;
        if (0 < *(int *)(lVar10 + 0x18)) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar9 = thunk_FUN_03f9944c();
          puVar16 = &DAT_0920cc78;
          goto LAB_04470e30;
        }
      }
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x44);
      *(undefined2 *)(param_1 + 0x120) = *(undefined2 *)(param_2 + 0x48);
      cVar3 = *(char *)(param_2 + 0x54);
      *(char *)(param_1 + 0x122) = cVar3;
      if ((*(ulong *)(param_2 + 0x4c) & 0xff) == 0) {
        if ((*(long *)(param_1 + 0x180) == 0) ||
           (lVar10 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar10 == 0)) goto LAB_0446fbf4;
        uVar6 = *(undefined4 *)(lVar10 + 0x38);
      }
      else {
        uVar6 = (undefined4)(*(ulong *)(param_2 + 0x4c) >> 0x20);
      }
      *(undefined4 *)(param_1 + 0x124) = uVar6;
      if (cVar3 == '\0') {
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x128) = 0;
      }
      else {
        uVar22 = *(undefined8 *)(param_2 + 0x58);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar9 = 0;
        uVar22 = System_Math__Max(0,uVar22,0);
        *(undefined8 *)(param_1 + 0x128) = uVar22;
        if (*(char *)(param_1 + 0x122) != '\0') {
          uVar9 = *(undefined8 *)(param_2 + 0x60);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = System_Math__Max(0,uVar9,0);
        }
      }
      *(undefined8 *)(param_1 + 0x130) = uVar9;
      if ((*(long *)(param_2 + 0x10) == 0) ||
         (lVar10 = *(long *)(*(long *)(param_2 + 0x10) + 0x28), lVar10 == 0)) goto LAB_0446fbf4;
      uVar6 = *(undefined4 *)(lVar10 + 0x2c);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Math__Max(1,uVar6,0);
      *(undefined4 *)(param_1 + 0x11c) = uVar6;
      lVar10 = *(long *)(param_2 + 0x78);
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x18) == 4)) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar24 = puVar17[0x9e];
        if (lVar24 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar9 = *puVar17;
          lVar24 = thunk_FUN_03f9944c(DAT_09178b98);
          FUN_05315754(lVar24,uVar9,DAT_091e7470,0);
          lVar18 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar18 + 0x4f0) = lVar24;
          thunk_FUN_03f5d7b8(lVar18 + 0x4f0,lVar24);
        }
        uVar13 = FUN_04ab6928(lVar10,lVar24,DAT_091c9498);
        if ((uVar13 & 1) == 0) {
          if (*(long *)(param_2 + 0x78) == 0) goto LAB_0446fbf4;
          lVar10 = System_Array__Clone(*(long *)(param_2 + 0x78),0);
          uVar9 = DAT_091801b8;
          if (lVar10 == 0) {
            lVar24 = 0;
            *(undefined8 *)(param_1 + 0x150) = 0;
          }
          else {
            lVar24 = thunk_FUN_03f99350(lVar10,DAT_091801b8);
            uVar22 = DAT_091801b8;
            if (lVar24 == 0) {
LAB_04470e5c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(lVar10,uVar9);
            }
            *(long *)(param_1 + 0x150) = lVar24;
            lVar24 = thunk_FUN_03f99350(lVar10,uVar22);
            uVar9 = uVar22;
            if (lVar24 == 0) goto LAB_04470e5c;
          }
          thunk_FUN_03f5d7b8(param_1 + 0x150,lVar24);
          if (*(long *)(param_2 + 0x20) != 0) {
            uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar10 = puVar17[0xa0];
            if (lVar10 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar22 = *puVar17;
              lVar10 = thunk_FUN_03f9944c(DAT_09178990);
              FUN_05324070(lVar10,uVar22,DAT_091e7478,0);
              lVar24 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar24 + 0x500) = lVar10;
              thunk_FUN_03f5d7b8(lVar24 + 0x500,lVar10);
            }
            uVar9 = FUN_04af8044(uVar9,lVar10,DAT_091ca4b0);
            lVar10 = FUN_04b049e4(uVar9,DAT_091cad08);
            plVar23 = (long *)(param_1 + 0x90);
            *plVar23 = lVar10;
            thunk_FUN_03f5d7b8(plVar23,lVar10);
            lVar10 = *plVar23;
            if (lVar10 != 0) {
              iVar5 = 0;
              while (iVar5 < *(int *)(lVar10 + 0x18)) {
                lVar10 = *(long *)(param_1 + 0x178);
                CookingGraph_CookingLevelSimulation__GridAddress(&local_140,iVar5);
                if (lVar10 == 0) goto LAB_0446fbf4;
                puStack_158 = puStack_138;
                local_160 = local_140;
                local_150 = local_130;
                CookingGraph_Execution_CookingExecution__RegisterInventory
                          (lVar10,&local_160,0x7fffffff,0,0);
                lVar10 = *plVar23;
                iVar5 = iVar5 + 1;
                if (lVar10 == 0) goto LAB_0446fbf4;
              }
              lVar10 = *plVar14;
              if ((lVar10 == 0) || (lVar24 = *(long *)(lVar10 + 0x20), lVar24 == 0))
              goto LAB_0446fbf4;
              for (uVar21 = 0; (int)uVar21 < *(int *)(lVar24 + 0x18); uVar21 = uVar21 + 1) {
                iVar5 = 0;
                while( true ) {
                  lVar24 = *(long *)(lVar10 + 0x20);
                  if (lVar24 == 0) goto LAB_0446fbf4;
                  if (*(uint *)(lVar24 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar18 = *(long *)(lVar24 + (ulong)uVar21 * 8 + 0x20);
                  if ((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) goto LAB_0446fbf4;
                  if (*(int *)(lVar18 + 0x1c) + *(int *)(*(long *)(lVar18 + 0x10) + 0x18) <= iVar5)
                  break;
                  lVar10 = *(long *)(param_1 + 0x178);
                  CookingGraph_CookingLevelSimulation__ToolAddress(&local_140,uVar21,iVar5);
                  if (lVar10 == 0) goto LAB_0446fbf4;
                  puStack_178 = puStack_138;
                  local_180 = local_140;
                  local_170 = local_130;
                  CookingGraph_Execution_CookingExecution__RegisterInventory
                            (lVar10,&local_180,0x7fffffff,0,0);
                  iVar5 = iVar5 + 1;
                  lVar10 = *plVar14;
                  if (lVar10 == 0) goto LAB_0446fbf4;
                }
              }
              if (*(long *)(param_2 + 0x18) == 0) goto LAB_0446fbf4;
              uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x18);
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              lVar10 = puVar17[0xa1];
              if (lVar10 == 0) {
                if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                }
                uVar22 = *puVar17;
                lVar10 = thunk_FUN_03f9944c(DAT_09178ee8);
                FUN_05323ae4(lVar10,uVar22,DAT_091e7498,0);
                lVar24 = *(long *)(DAT_0918f298 + 0xb8);
                *(long *)(lVar24 + 0x508) = lVar10;
                thunk_FUN_03f5d7b8(lVar24 + 0x508,lVar10);
              }
              uVar9 = FUN_04af7090(uVar9,lVar10,DAT_091ca6a0);
              uVar9 = FUN_04b046b4(uVar9,DAT_091caec0);
              *(undefined8 *)(param_1 + 0x88) = uVar9;
              thunk_FUN_03f5d7b8();
              if (*(long *)(param_2 + 0x18) == 0) goto LAB_0446fbf4;
              uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              lVar10 = puVar17[0xa2];
              if (lVar10 == 0) {
                if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                }
                uVar22 = *puVar17;
                lVar10 = thunk_FUN_03f9944c(DAT_09178b10);
                FUN_053239c8(lVar10,uVar22,DAT_091e74a0,0);
                lVar24 = *(long *)(DAT_0918f298 + 0xb8);
                *(long *)(lVar24 + 0x510) = lVar10;
                thunk_FUN_03f5d7b8(lVar24 + 0x510,lVar10);
              }
              uVar9 = FUN_04af6d6c(uVar9,lVar10,DAT_091ca518);
              uVar9 = FUN_04adcc84(uVar9,0,DAT_091c98c8);
              iVar5 = System_Linq_Enumerable__Max(uVar9,0);
              if ((*(long *)(param_2 + 0x18) == 0) ||
                 (lVar10 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar10 == 0))
              goto LAB_0446fbf4;
              FUN_057e185c(&local_140,lVar10,DAT_091ada70);
              local_90 = local_130;
              puStack_188 = &local_a0;
              puStack_98 = puStack_138;
              local_a0 = local_140;
              local_190 = 0;
              while (uVar13 = FUN_071bd28c(&local_a0,DAT_091a33a0), lVar10 = local_90,
                    (uVar13 & 1) != 0) {
                lVar18 = thunk_FUN_03f9944c(DAT_0917d270);
                FUN_057e0400(lVar18,DAT_091b2568);
                lVar24 = DAT_091aa7b0;
                lVar15 = *plVar11;
                if (lVar15 == 0) {
LAB_04470d8c:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar19 = *(long *)(lVar15 + 0x10);
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar19 == 0) goto LAB_04470d8c;
                uVar21 = *(uint *)(lVar15 + 0x18);
                if (uVar21 < *(uint *)(lVar19 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar21 + 1;
                  plVar23 = (long *)(lVar19 + (long)(int)uVar21 * 8 + 0x20);
                  *plVar23 = lVar18;
                  thunk_FUN_03f5d7b8(plVar23,lVar18);
                }
                else {
                  FUN_057e0c68(lVar15,lVar18,
                               *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
                }
                if (0 < iVar5) {
                  iVar7 = 0;
                  do {
                    lVar24 = thunk_FUN_03f9944c(DAT_0918f4c0);
                    CookingGraph_CookingLevelSimulation_<>c__DisplayClass273_0___ctor(lVar24,0);
                    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    *(long *)(lVar24 + 0x18) = param_1;
                    thunk_FUN_03f5d7b8((long *)(lVar24 + 0x18),param_1);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar15 = *(long *)(lVar10 + 0x10);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if (((iVar7 < *(int *)(lVar15 + 0x18)) &&
                        (lVar15 = FUN_057e0998(lVar15,iVar7,DAT_091af4e0), lVar15 != 0)) &&
                       (*(int *)(lVar15 + 0x10) != 2)) {
                      lVar19 = thunk_FUN_03f9944c(DAT_0918f680);
                      CookingGraph_CookingLevelSimulation_QueueCell___ctor(lVar19,0);
                      lVar20 = *(long *)(param_1 + 0x158);
                      *(long *)(param_1 + 0x158) = lVar20 + 1;
                      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      *(long *)(lVar19 + 0x10) = lVar20;
                      iVar8 = *(int *)(lVar15 + 0x10);
                      *(bool *)(lVar19 + 0x30) = iVar8 == 1;
                      if (iVar8 == 0) {
                        if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        uVar6 = CookingGraph_CookingGraphIndex__QueueIngredient(*plVar14,lVar15,0);
                      }
                      else {
                        uVar6 = 0xffffffff;
                      }
                      *(undefined4 *)(lVar19 + 0x18) = uVar6;
                      lVar20 = DAT_09187e80;
                      *(undefined4 *)(lVar19 + 0x1c) = *(undefined4 *)(lVar15 + 0x14);
                      uVar6 = *(undefined4 *)(lVar15 + 0x18);
                      if (*(int *)(lVar20 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar6 = System_Math__Max(1,uVar6,0);
                      lVar20 = DAT_0918f298;
                      *(undefined4 *)(lVar19 + 0x28) = uVar6;
                      uVar9 = *(undefined8 *)(lVar15 + 0x28);
                      if (*(int *)(lVar20 + 0xe4) == 0) {
                        FUN_03f5c424();
                        lVar20 = DAT_0918f298;
                      }
                      puVar17 = *(undefined8 **)(lVar20 + 0xb8);
                      lVar25 = puVar17[0xa3];
                      if (lVar25 == 0) {
                        if (*(int *)(lVar20 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar22 = *puVar17;
                        lVar25 = thunk_FUN_03f9944c(DAT_09178878);
                        FUN_05322d94(lVar25,uVar22,DAT_091e74b8,0);
                        lVar20 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar20 + 0x518) = lVar25;
                        thunk_FUN_03f5d7b8(lVar20 + 0x518,lVar25);
                      }
                      bVar4 = FUN_04ab6f28(uVar9,lVar25,DAT_091c9480);
                      lVar20 = DAT_0918f298;
                      *(byte *)(lVar19 + 0x31) = bVar4 & 1;
                      uVar9 = *(undefined8 *)(lVar15 + 0x28);
                      if (*(int *)(lVar20 + 0xe4) == 0) {
                        FUN_03f5c424();
                        lVar20 = DAT_0918f298;
                      }
                      puVar17 = *(undefined8 **)(lVar20 + 0xb8);
                      lVar25 = puVar17[0xa4];
                      if (lVar25 == 0) {
                        if (*(int *)(lVar20 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar22 = *puVar17;
                        lVar25 = thunk_FUN_03f9944c(DAT_09178878);
                        FUN_05322d94(lVar25,uVar22,DAT_091e74c0,0);
                        lVar20 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar20 + 0x520) = lVar25;
                        thunk_FUN_03f5d7b8(lVar20 + 0x520,lVar25);
                      }
                      lVar20 = FUN_04ae5fd0(uVar9,lVar25,DAT_091c9cd0);
                      if (lVar20 == 0) {
                        uVar6 = 0;
                      }
                      else {
                        uVar6 = FUN_04ae41a4(*(undefined8 *)(lVar20 + 0x18),DAT_091c9b98);
                      }
                      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar6 = System_Math__Max(0,uVar6,0);
                      lVar20 = DAT_0918f298;
                      *(undefined4 *)(lVar19 + 0x24) = uVar6;
                      uVar9 = *(undefined8 *)(lVar15 + 0x28);
                      if (*(int *)(lVar20 + 0xe4) == 0) {
                        FUN_03f5c424();
                        lVar20 = DAT_0918f298;
                      }
                      puVar17 = *(undefined8 **)(lVar20 + 0xb8);
                      lVar25 = puVar17[0xa5];
                      if (lVar25 == 0) {
                        if (*(int *)(lVar20 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar22 = *puVar17;
                        lVar25 = thunk_FUN_03f9944c(DAT_09178878);
                        FUN_05322d94(lVar25,uVar22,DAT_091e74c8,0);
                        lVar20 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar20 + 0x528) = lVar25;
                        thunk_FUN_03f5d7b8(lVar20 + 0x528,lVar25);
                      }
                      uVar9 = FUN_04b0cafc(uVar9,lVar25,DAT_091cb480);
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      lVar20 = puVar17[0xa6];
                      if (lVar20 == 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar22 = *puVar17;
                        lVar20 = thunk_FUN_03f9944c(DAT_091788a0);
                        FUN_053239c8(lVar20,uVar22,DAT_091e7480,0);
                        lVar25 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar25 + 0x530) = lVar20;
                        thunk_FUN_03f5d7b8(lVar25 + 0x530,lVar20);
                      }
                      uVar9 = FUN_04af6d6c(uVar9,lVar20,DAT_091ca428);
                      uVar9 = FUN_04b0462c(uVar9,DAT_091cae30);
                      *(undefined8 *)(lVar19 + 0x38) = uVar9;
                      thunk_FUN_03f5d7b8();
                      plVar23 = (long *)(lVar24 + 0x10);
                      *plVar23 = lVar19;
                      thunk_FUN_03f5d7b8(plVar23,lVar19);
                      uVar9 = *(undefined8 *)(lVar15 + 0x28);
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      lVar15 = puVar17[0xa7];
                      if (lVar15 == 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar22 = *puVar17;
                        lVar15 = thunk_FUN_03f9944c(DAT_09178878);
                        FUN_05322d94(lVar15,uVar22,DAT_091e74b0,0);
                        lVar19 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar19 + 0x538) = lVar15;
                        thunk_FUN_03f5d7b8(lVar19 + 0x538,lVar15);
                      }
                      uVar13 = FUN_04ab6f28(uVar9,lVar15,DAT_091c9480);
                      lVar15 = DAT_091b2570;
                      if ((uVar13 & 1) != 0) {
                        thunk_FUN_03fc39d4(&DAT_09181548);
                        uVar9 = thunk_FUN_03f9944c();
                        uVar22 = thunk_FUN_03fc39d4(&DAT_09212700);
                        System_ArgumentException___ctor(uVar9,uVar22,0);
                        uVar22 = thunk_FUN_03fc39d4(&DAT_091c6680);
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c414(uVar9,uVar22);
                      }
                      if (lVar18 == 0) {
LAB_04470d30:
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar20 = *(long *)(lVar18 + 0x10);
                      lVar19 = *plVar23;
                      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                      if (lVar20 == 0) goto LAB_04470d30;
                      uVar21 = *(uint *)(lVar18 + 0x18);
                      if (uVar21 < *(uint *)(lVar20 + 0x18)) {
                        *(uint *)(lVar18 + 0x18) = uVar21 + 1;
                        *(long *)(lVar20 + (long)(int)uVar21 * 8 + 0x20) = lVar19;
                        thunk_FUN_03f5d7b8();
                      }
                      else {
                        FUN_057e0c68(lVar18,lVar19,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                      }
                      if (*plVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar20 = *(long *)(param_1 + 0x178);
                      CookingGraph_CookingLevelSimulation_QueueCell__get_Address
                                (&local_1a8,*plVar23,0);
                      lVar15 = DAT_091c0138;
                      local_130 = local_198;
                      lVar19 = *plVar23;
                      puStack_138 = puStack_1a0;
                      local_140 = local_1a8;
                      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      uVar6 = *(undefined4 *)(lVar19 + 0x28);
                      if (*(char *)(lVar19 + 0x30) == '\0') {
                        puStack_f8 = puStack_1a0;
                        local_100 = local_1a8;
                        local_f0 = local_198;
                        uVar9 = System_Linq_Enumerable__Range(0,uVar6,0);
                        uVar22 = thunk_FUN_03f9944c(DAT_09178bb8);
                        FUN_05315ad8(uVar22,lVar24,DAT_091e7d48,0);
                        uVar9 = FUN_04af2a28(uVar9,uVar22,DAT_091ca568);
                        uVar9 = FUN_04b0451c(uVar9,DAT_091cadc0);
                        puVar17 = &local_100;
                      }
                      else {
                        puStack_d8 = puStack_1a0;
                        local_e0 = local_1a8;
                        local_d0 = local_198;
                        lVar24 = *(long *)(DAT_091c0138 + 0x38);
                        if (lVar24 == 0) {
                          FUN_03f95ac8(DAT_091c0138);
                          lVar24 = *(long *)(lVar15 + 0x38);
                        }
                        lVar24 = *(long *)(lVar24 + 0x10);
                        if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
                          lVar24 = FUN_03f95a6c();
                        }
                        if (*(int *)(lVar24 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        lVar24 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
                        if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
                          lVar24 = FUN_03f95a6c();
                        }
                        uVar9 = **(undefined8 **)(lVar24 + 0xb8);
                        puVar17 = &local_e0;
                      }
                      uStack_118 = puVar17[1];
                      local_120 = *puVar17;
                      local_110 = puVar17[2];
                      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      local_1c0 = local_120;
                      uStack_1b8 = uStack_118;
                      local_1b0 = local_110;
                      CookingGraph_Execution_CookingExecution__RegisterInventory
                                (lVar20,&local_1c0,uVar6,uVar9,0);
                    }
                    else {
                      lVar24 = DAT_091b2570;
                      if (lVar18 == 0) {
LAB_04470d1c:
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar15 = *(long *)(lVar18 + 0x10);
                      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                      if (lVar15 == 0) goto LAB_04470d1c;
                      uVar21 = *(uint *)(lVar18 + 0x18);
                      if (uVar21 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar18 + 0x18) = uVar21 + 1;
                        puVar17 = (undefined8 *)(lVar15 + (long)(int)uVar21 * 8 + 0x20);
                        *puVar17 = 0;
                        thunk_FUN_03f5d7b8(puVar17,0);
                      }
                      else {
                        FUN_057e0c68(lVar18,0,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    iVar7 = iVar7 + 1;
                  } while (iVar5 != iVar7);
                }
              }
              FUN_071bd288(&local_a0,DAT_091a3398);
              lVar10 = *(long *)(param_2 + 0x18);
              if (lVar10 == 0) goto LAB_0446fbf4;
              iVar5 = 0;
              while( true ) {
                lVar10 = *(long *)(lVar10 + 0x18);
                if (lVar10 == 0) break;
                if (*(int *)(lVar10 + 0x18) <= iVar5) {
                  CookingGraph_CookingLevelSimulation__Gravity(param_1);
                  if ((*(long *)(param_2 + 0x28) == 0) ||
                     (lVar10 = *(long *)(*(long *)(param_2 + 0x28) + 0x10), lVar10 == 0)) break;
                  iVar5 = *(int *)(lVar10 + 0x18);
                  *(int *)(param_1 + 0x114) = iVar5;
                  if (0 < iVar5) {
                    iVar5 = 0;
                    do {
                      if (((*(long *)(param_2 + 0x28) == 0) ||
                          (lVar10 = *(long *)(*(long *)(param_2 + 0x28) + 0x10), lVar10 == 0)) ||
                         (lVar10 = FUN_057e0998(lVar10,iVar5,DAT_091ac208), lVar10 == 0))
                      goto LAB_0446fbf4;
                      uVar22 = *(undefined8 *)(lVar10 + 0x20);
                      lVar24 = *plVar14;
                      uVar9 = thunk_FUN_03f9944c(DAT_09178820);
                      FUN_05324070(uVar9,lVar24,DAT_091c6630,0);
                      uVar9 = FUN_04af8044(uVar22,uVar9,DAT_091ca3f8);
                      lVar24 = FUN_04b049e4(uVar9,DAT_091caf30);
                      uVar21 = *(uint *)(lVar10 + 0x10);
                      if (1 < uVar21) {
                        thunk_FUN_03fc39d4(&DAT_09181548);
                        uVar9 = thunk_FUN_03f9944c();
                        puVar16 = &DAT_092126a8;
                        goto LAB_04470e30;
                      }
                      if (uVar21 != 1) {
                        if (lVar24 == 0) goto LAB_0446fbf4;
                        if (*(long *)(lVar24 + 0x18) == 0) {
                          thunk_FUN_03fc39d4(&DAT_09181548);
                          uVar9 = thunk_FUN_03f9944c();
                          puVar16 = &DAT_091fafe0;
                          goto LAB_04470e30;
                        }
                      }
                      if (*(int *)(lVar10 + 0x14) < 1) {
                        dVar26 = INFINITY;
                      }
                      else {
                        dVar26 = (double)*(int *)(lVar10 + 0x14);
                        if (((*(int *)(lVar10 + 0x18) == 1) &&
                            (uVar13 = System_String__IsNullOrEmpty
                                                (*(undefined8 *)(param_2 + 0x30),0),
                            (uVar13 & 1) == 0)) &&
                           (uVar13 = System_String__op_Inequality
                                               (*(undefined8 *)(param_2 + 0x30),DAT_09208de8,0),
                           (uVar13 & 1) != 0)) {
                          if ((*(long *)(param_1 + 0x180) == 0) ||
                             (lVar18 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar18 == 0))
                          goto LAB_0446fbf4;
                          dVar26 = dVar26 * (double)*(float *)(lVar18 + 0x2c);
                        }
                      }
                      if ((*(long *)(param_1 + 0x180) == 0) ||
                         (lVar18 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar18 == 0))
                      goto LAB_0446fbf4;
                      fVar27 = *(float *)(lVar18 + 0x1c);
                      fVar29 = *(float *)(lVar18 + 0x20);
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      lVar18 = puVar17[0xa8];
                      if (lVar18 == 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar9 = *puVar17;
                        lVar18 = thunk_FUN_03f9944c(DAT_09179338);
                        FUN_05322d94(lVar18,uVar9,DAT_091e7488,0);
                        lVar15 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar15 + 0x540) = lVar18;
                        thunk_FUN_03f5d7b8(lVar15 + 0x540,lVar18);
                      }
                      iVar7 = FUN_04adc4d0(lVar24,lVar18,DAT_091c9890);
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_0918f298);
                      }
                      puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      lVar18 = puVar17[0xa9];
                      if (lVar18 == 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424(DAT_0918f298);
                          puVar17 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar9 = *puVar17;
                        lVar18 = thunk_FUN_03f9944c(DAT_09179338);
                        FUN_05322d94(lVar18,uVar9,DAT_091e7490,0);
                        lVar15 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar15 + 0x548) = lVar18;
                        thunk_FUN_03f5d7b8(lVar15 + 0x548,lVar18);
                      }
                      iVar8 = FUN_04adc4d0(lVar24,lVar18,DAT_091c9890);
                      lVar18 = *(long *)(param_1 + 0x180);
                      if ((lVar18 == 0) || (*(long *)(lVar18 + 0x48) == 0)) goto LAB_0446fbf4;
                      iVar2 = *(int *)(*(long *)(lVar18 + 0x48) + 0x24);
                      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                        FUN_03f5c424();
                        lVar18 = *(long *)(param_1 + 0x180);
                      }
                      if ((lVar18 == 0) || (*(long *)(lVar18 + 0x48) == 0)) goto LAB_0446fbf4;
                      dVar28 = ((double)(long)((double)iVar8 / (double)iVar2) + (double)iVar7) *
                               (double)fVar29 + (double)fVar27;
                      if ((double)*(float *)(*(long *)(lVar18 + 0x48) + 0x18) < dVar28) {
                        thunk_FUN_03fc39d4(&DAT_09181548);
                        uVar9 = thunk_FUN_03f9944c();
                        puVar16 = &DAT_091ffa90;
                        goto LAB_04470e30;
                      }
                      if (*(long *)(param_2 + 0x70) == 0) goto LAB_0446fbf4;
                      bVar4 = FUN_053d750c(*(long *)(param_2 + 0x70),iVar5,DAT_091a82c0);
                      lVar15 = *plVar12;
                      lVar18 = thunk_FUN_03f9944c(DAT_0918f660);
                      CookingGraph_CookingLevelSimulation_Customer___ctor(lVar18,0);
                      if (lVar18 == 0) goto LAB_0446fbf4;
                      *(int *)(lVar18 + 0x10) = iVar5;
                      *(long *)(lVar18 + 0x50) = lVar24;
                      thunk_FUN_03f5d7b8((long *)(lVar18 + 0x50),lVar24);
                      *(undefined8 *)(lVar18 + 0x38) = *(undefined8 *)(lVar10 + 0x38);
                      *(bool *)(lVar18 + 0x18) = uVar21 == 1;
                      *(byte *)(lVar18 + 0x19) = bVar4 & 1;
                      thunk_FUN_03f5d7b8();
                      fVar27 = 0.0;
                      if (uVar21 != 1) {
                        if (*(long *)(param_1 + 0x180) == 0) goto LAB_0446fbf4;
                        fVar27 = (float)CookingGraph_CookingRuntimeSettings__EatingSecondsFor
                                                  (*(long *)(param_1 + 0x180),
                                                   *(undefined8 *)(lVar10 + 0x38),bVar4 & 1,0);
                      }
                      *(double *)(lVar18 + 0x40) = (double)fVar27;
                      if (*(char *)(lVar10 + 0x28) == '\0') {
                        if ((*(long *)(param_1 + 0x180) == 0) ||
                           (lVar10 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar10 == 0))
                        goto LAB_0446fbf4;
                        uVar6 = *(undefined4 *)(lVar10 + 0x30);
                      }
                      else {
                        uVar6 = *(undefined4 *)(lVar10 + 0x2c);
                        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar6 = System_Math__Max(0,uVar6,0);
                      }
                      *(undefined4 *)(lVar18 + 0x14) = uVar6;
                      *(double *)(lVar18 + 0x20) = dVar26;
                      *(double *)(lVar18 + 0x28) = dVar26;
                      *(double *)(lVar18 + 0x30) = dVar28;
                      lVar10 = DAT_091b24e0;
                      if (lVar15 == 0) goto LAB_0446fbf4;
                      lVar24 = *(long *)(lVar15 + 0x10);
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if (lVar24 == 0) goto LAB_0446fbf4;
                      uVar21 = *(uint *)(lVar15 + 0x18);
                      if (uVar21 < *(uint *)(lVar24 + 0x18)) {
                        *(uint *)(lVar15 + 0x18) = uVar21 + 1;
                        plVar11 = (long *)(lVar24 + (long)(int)uVar21 * 8 + 0x20);
                        *plVar11 = lVar18;
                        thunk_FUN_03f5d7b8(plVar11,lVar18);
                      }
                      else {
                        FUN_057e0c68(lVar15,lVar18,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar5 = iVar5 + 1;
                    } while (iVar5 < *(int *)(param_1 + 0x114));
                  }
                  uVar9 = CookingGraph_CookingLevelSimulation__Fingerprint(param_1);
                  *(undefined8 *)(param_1 + 0x1a8) = uVar9;
                  thunk_FUN_03f5d7b8(param_1 + 0x1a8,uVar9);
                  uVar13 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x68),0);
                  if (((uVar13 & 1) != 0) ||
                     (uVar13 = System_String__op_Inequality
                                         (*(undefined8 *)(param_2 + 0x68),
                                          *(undefined8 *)(param_1 + 0x1a8),0), (uVar13 & 1) == 0)) {
                    CookingGraph_CookingLevelSimulation__Settle(param_1);
                    CookingGraph_CookingLevelSimulation__CheckEnd(param_1);
                    return;
                  }
                  thunk_FUN_03fc39d4(&DAT_09181548);
                  uVar9 = thunk_FUN_03f9944c();
                  puVar16 = &DAT_09206d00;
                  goto LAB_04470e30;
                }
                lVar10 = FUN_057e0998(lVar10,iVar5,DAT_091af4b8);
                if ((lVar10 == 0) || (*(long *)(lVar10 + 0x18) == 0)) break;
                FUN_057e185c(&local_140,*(long *)(lVar10 + 0x18),DAT_091af488);
                local_c0 = local_140;
                local_140 = 0;
                puStack_b8 = puStack_138;
                local_b0 = local_130;
                puStack_138 = &local_c0;
                while (uVar13 = FUN_071bd28c(&local_c0,DAT_091a3e98), (uVar13 & 1) != 0) {
                  if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar10 = CookingGraph_CookingLevelSimulation__At
                                     (param_1,*(undefined4 *)(local_b0 + 0x10),
                                      *(undefined4 *)(local_b0 + 0x14));
                  if ((lVar10 == 0) || (-1 < *(int *)(lVar10 + 0x20))) {
                    thunk_FUN_03fc39d4(&DAT_09181548);
                    uVar9 = thunk_FUN_03f9944c();
                    uVar22 = thunk_FUN_03fc39d4(&DAT_09205940);
                    System_ArgumentException___ctor(uVar9,uVar22,0);
                    uVar22 = thunk_FUN_03fc39d4(&DAT_091c6680);
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar9,uVar22);
                  }
                  *(int *)(lVar10 + 0x20) = iVar5;
                }
                FUN_071bd288(&local_c0,DAT_091a3e90);
                iVar5 = iVar5 + 1;
                lVar10 = *(long *)(param_2 + 0x18);
                if (lVar10 == 0) break;
              }
            }
          }
          goto LAB_0446fbf4;
        }
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar9 = thunk_FUN_03f9944c();
      puVar16 = &DAT_09202e48;
      goto LAB_04470e30;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar9 = thunk_FUN_03f9944c();
  puVar16 = &DAT_091faf98;
LAB_04470e30:
  uVar22 = thunk_FUN_03fc39d4(puVar16);
  System_ArgumentException___ctor(uVar9,uVar22,0);
  uVar22 = thunk_FUN_03fc39d4(&DAT_091c6680);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar9,uVar22);
}

