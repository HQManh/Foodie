// rea decompile_all
// name: TrungKien.UI.NewFearther.NewToolLevelPreview$$GetGridObstacleKeysOfLevel
// address: 0x4085e38
// body: available
// range: 0x4085e38-0x408603f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4086038 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408603c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long TrungKien_UI_NewFearther_NewToolLevelPreview__GetGridObstacleKeysOfLevel
               (undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_09515c91 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09515c91 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar2,DAT_091b0558);
  lVar3 = TrungKien_UI_NewFearther_NewToolLevelPreview__GetLevelDesign(param_1,param_2);
  uVar4 = System_String__IsNullOrEmpty(lVar3,0);
  if ((uVar4 & 1) != 0) {
    return lVar2;
  }
  if (lVar3 == 0) goto LAB_0408603c;
  lVar3 = System_String__Split(lVar3,0x7e,0,0);
  if (lVar3 == 0) {
    return lVar2;
  }
  if (*(int *)(lVar3 + 0x18) < 2) {
    return lVar2;
  }
  lVar3 = *(long *)(lVar3 + 0x28);
  if (DAT_09515cf2 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09515cf2 = '\x01';
    if (lVar3 != 0) goto LAB_04085f10;
LAB_04085f3c:
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    if (lVar3 == 0) goto LAB_04085f3c;
LAB_04085f10:
    uVar5 = System_String__GetRawStringData(lVar3,0);
    uVar7 = *(undefined4 *)(lVar3 + 0x10);
  }
  lVar3 = CakeOrder_LevelGridConfig__ParseGridData(uVar5,uVar7,0);
  if (lVar3 != 0) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar4 = 0;
      uVar8 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = *(long *)(lVar3 + 0x20 + uVar4 * 8);
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x10) != 0)) {
          uVar5 = TrungKien_UI_NewFearther_UINewFeartherConfig__GridObstacleKey();
          if (lVar2 == 0) goto LAB_0408603c;
          uVar8 = FUN_057e1004(lVar2,uVar5,DAT_091b0590);
          lVar9 = DAT_091b0570;
          if ((uVar8 & 1) == 0) {
            lVar10 = *(long *)(lVar2 + 0x10);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0408603c;
            uVar1 = *(uint *)(lVar2 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar2 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar5;
              thunk_FUN_03f5d7b8(puVar6,uVar5);
            }
            else {
              FUN_057e0c68(lVar2,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    return lVar2;
  }
LAB_0408603c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

