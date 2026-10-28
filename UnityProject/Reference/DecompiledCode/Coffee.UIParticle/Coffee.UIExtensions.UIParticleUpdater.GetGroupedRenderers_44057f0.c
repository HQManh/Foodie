// rea decompile_all
// name: Coffee.UIExtensions.UIParticleUpdater$$GetGroupedRenderers
// address: 0x44057f0
// body: available
// range: 0x44057f0-0x440598f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440598c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticleUpdater__GetGroupedRenderers
               (int param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if ((DAT_09517ea4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1648);
    FUN_03f5c2a4(&DAT_091b1650);
    FUN_03f5c2a4(&DAT_091b1600);
    FUN_03f5c2a4(&DAT_091b1608);
    FUN_03f5c2a4(&DAT_0918c448);
    DAT_09517ea4 = 1;
  }
  if (param_3 != 0) {
    iVar5 = *(int *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (0 < iVar5) {
      System_Array__Clear(*(undefined8 *)(param_3 + 0x10),0,iVar5,0);
    }
    iVar5 = 0;
    while( true ) {
      if (*(int *)(DAT_0918c448 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = **(long **)(DAT_0918c448 + 0xb8);
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x18) <= iVar5) {
        return;
      }
      if (*(int *)(DAT_0918c448 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = **(long **)(DAT_0918c448 + 0xb8);
        if (lVar3 == 0) break;
      }
      lVar3 = FUN_057e0998(lVar3,iVar5,DAT_091b1608);
      if (lVar3 == 0) break;
      if ((*(int *)(lVar3 + 0xf8) != 0) && (*(int *)(lVar3 + 0x130) == param_1)) {
        uVar2 = Coffee_UIExtensions_UIParticle__GetRenderer(lVar3,param_2);
        lVar3 = DAT_091b1648;
        lVar4 = *(long *)(param_3 + 0x10);
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
        if (lVar4 == 0) break;
        uVar1 = *(uint *)(param_3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(param_3,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar5 = iVar5 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

