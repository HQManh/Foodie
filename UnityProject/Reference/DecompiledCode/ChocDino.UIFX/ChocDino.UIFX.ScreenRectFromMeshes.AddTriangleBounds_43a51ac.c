// rea decompile_all
// name: ChocDino.UIFX.ScreenRectFromMeshes$$AddTriangleBounds
// address: 0x43a51ac
// body: available
// range: 0x43a51ac-0x43a55a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a5574 to 0x43a3f90 ChocDino.UIFX.ScreenRectFromMeshes$$AddBounds (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ScreenRectFromMeshes__AddTriangleBounds
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
               undefined8 param_5,long param_6,long param_7,long param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  
  if ((DAT_09517abb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1a68);
    FUN_03f5c2a4(&DAT_091abad0);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091abad8);
    FUN_03f5c2a4(&DAT_091b1a70);
    FUN_03f5c2a4(&DAT_091add20);
    DAT_09517abb = 1;
  }
  if ((param_6 != 0) && (param_7 != 0)) {
    lVar8 = param_8;
    if ((param_8 != 0) && (lVar8 = 0, *(int *)(param_8 + 0x18) != 0)) {
      lVar8 = param_8;
    }
    if (((0 < *(int *)(param_6 + 0x18)) && (uVar1 = *(uint *)(param_7 + 0x18), 2 < (int)uVar1)) &&
       (uVar1 % 3 == 0)) {
      fVar7 = 3.4028235e+38;
      bVar2 = false;
      iVar9 = 0;
      local_bc = -3.4028235e+38;
      local_b8 = -3.4028235e+38;
      local_c4 = 3.4028235e+38;
      local_c0 = -3.4028235e+38;
      local_c8 = 3.4028235e+38;
      do {
        while( true ) {
          iVar3 = FUN_05796eb0(param_7,iVar9,DAT_091add20);
          iVar4 = FUN_05796eb0(param_7,iVar9 + 1,DAT_091add20);
          iVar5 = FUN_05796eb0(param_7,iVar9 + 2,DAT_091add20);
          if ((((iVar5 != iVar3) && (iVar3 != iVar4)) && (iVar4 != iVar5)) &&
             ((fVar13 = param_2, fVar15 = param_3, lVar8 == 0 ||
              (((uVar6 = FUN_057311b8(lVar8,iVar3,DAT_091abad8), (uVar6 & 0xff000000) != 0 &&
                (uVar6 = FUN_057311b8(lVar8,iVar4,DAT_091abad8), (uVar6 & 0xff000000) != 0)) &&
               (uVar6 = FUN_057311b8(lVar8,iVar5,DAT_091abad8), fVar13 = param_2, fVar15 = param_3,
               (uVar6 & 0xff000000) != 0)))))) break;
LAB_043a5454:
          iVar9 = iVar9 + 3;
          if ((int)uVar1 <= iVar9) {
            if (!bVar2) {
              return;
            }
            goto LAB_043a5530;
          }
        }
        fVar10 = (float)FUN_058b15e4(param_6,iVar3,DAT_091b1a70);
        fVar14 = fVar13;
        fVar16 = fVar15;
        fVar11 = (float)FUN_058b15e4(param_6,iVar4,DAT_091b1a70);
        param_2 = fVar14;
        param_3 = fVar16;
        fVar12 = (float)FUN_058b15e4(param_6,iVar5,DAT_091b1a70);
        if ((((fVar15 - fVar16) * (fVar15 - fVar16) +
              (fVar10 - fVar11) * (fVar10 - fVar11) + (fVar13 - fVar14) * (fVar13 - fVar14) <
              9.9999994e-11) ||
            ((fVar16 - param_3) * (fVar16 - param_3) +
             (fVar11 - fVar12) * (fVar11 - fVar12) + (fVar14 - param_2) * (fVar14 - param_2) <
             9.9999994e-11)) ||
           ((param_3 - fVar15) * (param_3 - fVar15) +
            (fVar12 - fVar10) * (fVar12 - fVar10) + (param_2 - fVar13) * (param_2 - fVar13) <
            9.9999994e-11)) goto LAB_043a5454;
        iVar9 = iVar9 + 3;
        bVar2 = true;
        if (fVar10 <= local_c8) {
          local_c8 = fVar10;
        }
        if (fVar13 <= local_c4) {
          local_c4 = fVar13;
        }
        if (fVar15 <= fVar7) {
          fVar7 = fVar15;
        }
        if (local_c0 <= fVar10) {
          local_c0 = fVar10;
        }
        if (local_bc <= fVar13) {
          local_bc = fVar13;
        }
        if (local_b8 <= fVar15) {
          local_b8 = fVar15;
        }
        if (fVar11 <= local_c8) {
          local_c8 = fVar11;
        }
        if (fVar14 <= local_c4) {
          local_c4 = fVar14;
        }
        if (fVar16 <= fVar7) {
          fVar7 = fVar16;
        }
        if (local_c0 <= fVar11) {
          local_c0 = fVar11;
        }
        if (local_bc <= fVar14) {
          local_bc = fVar14;
        }
        if (local_b8 <= fVar16) {
          local_b8 = fVar16;
        }
        if (fVar12 <= local_c8) {
          local_c8 = fVar12;
        }
        if (param_2 <= local_c4) {
          local_c4 = param_2;
        }
        if (param_3 <= fVar7) {
          fVar7 = param_3;
        }
        if (local_c0 <= fVar12) {
          local_c0 = fVar12;
        }
        if (local_bc <= param_2) {
          local_bc = param_2;
        }
        if (local_b8 <= param_3) {
          local_b8 = param_3;
        }
      } while (iVar9 < (int)uVar1);
LAB_043a5530:
      ChocDino_UIFX_ScreenRectFromMeshes__AddBounds
                (local_c8,local_c4,fVar7,local_c0,local_bc,local_b8,param_4,param_5);
      return;
    }
  }
  return;
}

