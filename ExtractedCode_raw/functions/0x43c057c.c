// rea decompile_all
// name: ChocDino.UIFX.TextMeshProMeshModifier$$ModifyMesh
// address: 0x43c057c
// body: available
// range: 0x43c057c-0x43c080f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c0808 to 0x89b74e0 UnityEngine.UI.VertexHelper$$Dispose (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43c080c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TextMeshProMeshModifier__ModifyMesh
               (long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  
  if ((DAT_09517b7d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186070);
    FUN_03f5c2a4(&DAT_091ad488);
    FUN_03f5c2a4(&DAT_091ad490);
    FUN_03f5c2a4(&DAT_09188058);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918cce8);
    DAT_09517b7d = 1;
  }
  if (((param_3 != 0) && (lVar1 = UnityEngine_Mesh__get_uv3(param_3,0), lVar1 != 0)) &&
     (lVar2 = UnityEngine_Mesh__get_uv2(param_3,0), lVar2 != 0)) {
    if (*(int *)(lVar1 + 0x18) != *(int *)(lVar2 + 0x18)) {
      uVar3 = UnityEngine_Mesh__get_uv2(param_3,0);
      UnityEngine_Mesh__set_uv3(param_3,uVar3,0);
    }
    lVar1 = UnityEngine_Mesh__get_uv4(param_3,0);
    if ((lVar1 != 0) && (lVar2 = UnityEngine_Mesh__get_uv2(param_3,0), lVar2 != 0)) {
      if (*(int *)(lVar1 + 0x18) != *(int *)(lVar2 + 0x18)) {
        uVar3 = UnityEngine_Mesh__get_uv2(param_3,0);
        UnityEngine_Mesh__set_uv4(param_3,uVar3,0);
      }
      lVar1 = thunk_FUN_03f9944c(DAT_0918cce8);
      UnityEngine_UI_VertexHelper___ctor(lVar1,param_3,0);
      if (param_2 != 0) {
        if (0 < *(int *)(param_2 + 0x18)) {
          iVar8 = 0;
          do {
            plVar4 = (long *)FUN_057e0998(param_2,iVar8,DAT_091ad490);
            if (plVar4 == (long *)0x0) goto LAB_043c080c;
            lVar2 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09186070) {
                  puVar5 = (undefined8 *)(lVar2 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_043c074c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09186070,1);
LAB_043c074c:
            (*(code *)*puVar5)(plVar4,lVar1,puVar5[1]);
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(param_2 + 0x18));
        }
        puVar5 = (undefined8 *)(param_1 + 0x40);
        uVar3 = *puVar5;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Implicit(uVar3,0);
        if ((uVar6 & 1) == 0) {
          uVar3 = thunk_FUN_03f9944c(DAT_09188058);
          UnityEngine_Mesh___ctor(uVar3,0);
          *puVar5 = uVar3;
          thunk_FUN_03f5d7b8(puVar5,uVar3);
        }
        if ((lVar1 != 0) && (UnityEngine_UI_VertexHelper__FillMesh(lVar1,*puVar5,0), param_4 != 0))
        {
          UnityEngine_CanvasRenderer__SetMesh(param_4,*puVar5,0);
          UnityEngine_UI_VertexHelper__Dispose(lVar1,0);
          return;
        }
      }
    }
  }
LAB_043c080c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

