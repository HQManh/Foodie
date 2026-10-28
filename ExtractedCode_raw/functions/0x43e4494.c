// rea decompile_all
// name: Coffee.UIEffectInternal.MeshExtensions$$CopyTo
// address: 0x43e4494
// body: available
// range: 0x43e4494-0x43e4967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e4964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffectInternal_MeshExtensions__CopyTo
               (long param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  
  if ((DAT_09517d57 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a9120);
    FUN_03f5c2a4(&DAT_091a90d0);
    FUN_03f5c2a4(&DAT_091a9110);
    FUN_03f5c2a4(&DAT_091a90b0);
    FUN_03f5c2a4(&DAT_091a9128);
    FUN_03f5c2a4(&DAT_091a9118);
    FUN_03f5c2a4(&DAT_091a90b8);
    FUN_03f5c2a4(&DAT_091a90d8);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091d33c8);
    FUN_03f5c2a4(&DAT_091d33d0);
    FUN_03f5c2a4(&DAT_091d33d8);
    FUN_03f5c2a4(&DAT_09188068);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517d57 = 1;
  }
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(param_1,0);
  if ((param_2 == 0) || ((uVar4 & 1) == 0)) {
    return;
  }
  uVar5 = FUN_055657e4(DAT_091a9110);
  local_a8 = uVar5;
  uVar6 = FUN_055657e4(DAT_091a9110);
  local_b0 = uVar6;
  uVar7 = FUN_055658d4(DAT_091a9120);
  local_b8 = uVar7;
  uVar8 = FUN_055658d4(DAT_091a9120);
  local_c0 = uVar8;
  uVar9 = FUN_055658d4(DAT_091a9120);
  local_c8 = uVar9;
  uVar10 = FUN_05565514(DAT_091a90b0);
  local_d0 = uVar10;
  lVar11 = FUN_05565604(DAT_091a90d0);
  local_d8 = lVar11;
  if (param_1 != 0) {
    UnityEngine_Mesh__GetVertices(param_1,uVar5,0);
    UnityEngine_Mesh__GetColors(param_1,uVar10,0);
    UnityEngine_Mesh__GetUVs(param_1,0,uVar7,0);
    UnityEngine_Mesh__GetUVs(param_1,1,uVar8,0);
    UnityEngine_Mesh__GetNormals(param_1,uVar6,0);
    UnityEngine_Mesh__GetTangents(param_1,uVar9,0);
    UnityEngine_Mesh__GetIndices(param_1,lVar11,0,0);
    UnityEngine_UI_VertexHelper__Clear(param_2,0);
    if (0 < param_3) {
      iVar12 = 0;
      do {
        if (*(int *)(DAT_09188068 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = FUN_04c0e590(uVar5,iVar12,DAT_091d33d0);
        uVar2 = FUN_04c0e520(uVar10,iVar12,DAT_091d33c8);
        FUN_04c0e604(uVar7,iVar12,DAT_091d33d8);
        FUN_04c0e604(uVar8,iVar12,DAT_091d33d8);
        FUN_04c0e590(uVar6,iVar12,DAT_091d33d0);
        FUN_04c0e604(uVar9,iVar12,DAT_091d33d8);
        UnityEngine_UI_VertexHelper__AddVert(uVar13,param_2,uVar2,0);
        iVar12 = iVar12 + 1;
      } while (param_3 != iVar12);
    }
    if (lVar11 != 0) {
      iVar12 = param_4;
      if (*(int *)(lVar11 + 0x18) <= param_4) {
        iVar12 = *(int *)(lVar11 + 0x18);
      }
      iVar1 = -2;
      if (-1 < param_4) {
        iVar1 = iVar12 + -2;
      }
      if (0 < iVar1) {
        iVar12 = 0;
        do {
          uVar2 = FUN_05796eb0(lVar11,iVar12,DAT_091add20);
          uVar13 = FUN_05796eb0(lVar11,iVar12 + 1,DAT_091add20);
          uVar3 = FUN_05796eb0(lVar11,iVar12 + 2,DAT_091add20);
          UnityEngine_UI_VertexHelper__AddTriangle(param_2,uVar2,uVar13,uVar3,0);
          iVar12 = iVar12 + 3;
        } while (iVar12 < iVar1);
      }
      FUN_05565848(&local_a8,DAT_091a9118);
      FUN_05565848(&local_b0,DAT_091a9118);
      FUN_05565938(&local_b8,DAT_091a9128);
      FUN_05565938(&local_c0,DAT_091a9128);
      FUN_05565938(&local_c8,DAT_091a9128);
      FUN_05565578(&local_d0,DAT_091a90b8);
      FUN_05565668(&local_d8,DAT_091a90d8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

