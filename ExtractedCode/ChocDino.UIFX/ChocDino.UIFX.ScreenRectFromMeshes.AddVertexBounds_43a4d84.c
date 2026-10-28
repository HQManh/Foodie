// rea decompile_all
// name: ChocDino.UIFX.ScreenRectFromMeshes$$AddVertexBounds
// address: 0x43a4d84
// body: available
// range: 0x43a4d84-0x43a4f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a4f10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ScreenRectFromMeshes__AddVertexBounds
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulong uVar6;
  ulong local_d0;
  ulong local_c0;
  float local_b8;
  
  if ((DAT_09517aba & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b16f8);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_0917cfe8);
    DAT_09517aba = 1;
  }
  if ((param_3 != 0) &&
     (iVar1 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_3,0), 0 < iVar1)) {
    lVar2 = thunk_FUN_03f9944c(DAT_0917cfe8);
    FUN_058941e8(lVar2,iVar1,DAT_091b16f8);
    UnityEngine_UI_VertexHelper__GetUIVertexStream(param_3,lVar2,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = 0xff7fffffff7fffff;
    fVar3 = 3.4028235e+38;
    fVar4 = -3.4028235e+38;
    iVar5 = 0;
    local_d0 = 0x7f7fffff7f7fffff;
    do {
      FUN_05894708(&local_c0,lVar2,iVar5,DAT_091b1750);
      local_d0 = local_d0 ^
                 (local_d0 ^ local_c0) &
                 ~CONCAT44(-(uint)((float)(local_d0 >> 0x20) < (float)(local_c0 >> 0x20)),
                           -(uint)((float)local_d0 < (float)local_c0));
      if (local_b8 <= fVar3) {
        fVar3 = local_b8;
      }
      FUN_05894708(&local_c0,lVar2,iVar5,DAT_091b1750);
      iVar5 = iVar5 + 1;
      uVar6 = uVar6 ^ (uVar6 ^ local_c0) &
                      ~CONCAT44(-(uint)((float)(local_c0 >> 0x20) < (float)(uVar6 >> 0x20)),
                                -(uint)((float)local_c0 < (float)uVar6));
      if (fVar4 <= local_b8) {
        fVar4 = local_b8;
      }
    } while (iVar1 != iVar5);
    ChocDino_UIFX_ScreenRectFromMeshes__AddBounds
              (local_d0,(int)(local_d0 >> 0x20),fVar3,uVar6,(int)(uVar6 >> 0x20),fVar4,param_1,
               param_2);
  }
  return;
}

