// rea decompile_all
// name: Utilities.GlobalShaderControl$$SetTexture
// address: 0x450b34c
// body: available
// range: 0x450b34c-0x450b51b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450b4ec to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x450b514 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x450b518 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_GlobalShaderControl__SetTexture(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if ((DAT_095184fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2d60);
    FUN_03f5c2a4(&DAT_091b2d68);
    FUN_03f5c2a4(&DAT_0917e1b0);
    FUN_03f5c2a4(&DAT_09190db0);
    FUN_03f5c2a4(&DAT_091ea4e8);
    FUN_03f5c2a4(&DAT_09190d90);
    DAT_095184fd = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09190d90);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    puVar8 = (undefined8 *)(lVar3 + 0x10);
    *puVar8 = param_2;
    thunk_FUN_03f5d7b8(puVar8,param_2);
    lVar7 = *(long *)(param_1 + 0x48);
    uVar4 = thunk_FUN_03f9944c(DAT_0917e1b0);
    FUN_05d78cfc(uVar4,lVar3,DAT_091ea4e8,0);
    if (lVar7 != 0) {
      lVar3 = FUN_057e1328(lVar7,uVar4,DAT_091b2d68);
      if (lVar3 != 0) {
        plVar5 = (long *)(lVar3 + 0x18);
        *plVar5 = param_3;
        lVar3 = param_3;
LAB_0450b4dc:
        thunk_FUN_03f5d7b8(plVar5,lVar3);
        return;
      }
      lVar7 = *(long *)(param_1 + 0x48);
      lVar3 = thunk_FUN_03f9944c(DAT_09190db0);
      Utilities_GlobalShaderControl_ShaderPropertyTexture___ctor();
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = *puVar8;
        thunk_FUN_03f5d7b8();
        *(long *)(lVar3 + 0x18) = param_3;
        thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_3);
        lVar2 = DAT_091b2d60;
        if (lVar7 != 0) {
          lVar6 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (*(uint *)(lVar6 + 0x18) <= uVar1) {
              FUN_057e0c68(lVar7,lVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              return;
            }
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *plVar5 = lVar3;
            goto LAB_0450b4dc;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

