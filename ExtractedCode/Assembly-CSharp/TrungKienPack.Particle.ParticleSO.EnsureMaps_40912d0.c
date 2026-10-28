// rea decompile_all
// name: TrungKienPack.Particle.ParticleSO$$EnsureMaps
// address: 0x40912d0
// body: available
// range: 0x40912d0-0x4091633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4091620 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4091624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4091628 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409162c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4091630 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_ParticleSO__EnsureMaps(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09515d13 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919ec48);
    FUN_03f5c2a4(&DAT_0919fbf0);
    FUN_03f5c2a4(&DAT_0919fbe8);
    FUN_03f5c2a4(&DAT_0919ec40);
    FUN_03f5c2a4(&DAT_0919fc00);
    FUN_03f5c2a4(&DAT_0919ec58);
    FUN_03f5c2a4(&DAT_09176b90);
    FUN_03f5c2a4(&DAT_09176840);
    FUN_03f5c2a4(&DAT_091a3c08);
    FUN_03f5c2a4(&DAT_091a3c10);
    FUN_03f5c2a4(&DAT_091a3c18);
    FUN_03f5c2a4(&DAT_091aee90);
    FUN_03f5c2a4(&DAT_09188ef0);
    FUN_03f5c2a4(&DAT_091f77e8);
    FUN_03f5c2a4(&DAT_09213fb8);
    FUN_03f5c2a4(&DAT_09213fc0);
    DAT_09515d13 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  plVar4 = (long *)(param_1 + 0x70);
  local_70 = 0;
  if (*plVar4 == 0) {
    uVar1 = thunk_FUN_03f9944c(DAT_09176b90);
    FUN_06fd76bc(uVar1,DAT_0919fbe8);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    thunk_FUN_03f5d7b8(plVar4,uVar1);
    lVar2 = thunk_FUN_03f9944c(DAT_09176840);
    FUN_06f33130(lVar2,DAT_0919ec40);
    plVar5 = (long *)(param_1 + 0x78);
    *plVar5 = lVar2;
    thunk_FUN_03f5d7b8(plVar5,lVar2);
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_98,*(long *)(param_1 + 0x58),DAT_091aee90);
    local_80 = local_98;
    local_70 = local_88;
    local_98 = 0;
    uStack_78 = puStack_90;
    puStack_90 = &local_80;
    while (uVar3 = FUN_071bd28c(&local_80,DAT_091a3c10), lVar2 = local_70, (uVar3 & 1) != 0) {
      if ((local_70 != 0) && (*(long *)(local_70 + 0x20) != 0)) {
        uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(local_70 + 0x10),0);
        if ((uVar3 & 1) == 0) {
          if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = FUN_06fd8648(*plVar4,*(undefined8 *)(lVar2 + 0x10),DAT_0919fbf0);
          if ((uVar3 & 1) != 0) {
            uVar1 = System_String__Concat(DAT_09213fb8,*(undefined8 *)(lVar2 + 0x10),DAT_091f77e8,0)
            ;
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Debug__LogError(uVar1,param_1,0);
          }
          if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fd8440(*plVar4,*(undefined8 *)(lVar2 + 0x10),lVar2,DAT_0919fc00);
        }
        if (*(int *)(lVar2 + 0x18) != 0) {
          if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = FUN_06f340e0(*plVar5,*(int *)(lVar2 + 0x18),DAT_0919ec48);
          if ((uVar3 & 1) != 0) {
            local_9c = *(undefined4 *)(lVar2 + 0x18);
            uVar1 = FUN_03f5c42c(DAT_09188ef0,&local_9c);
            uVar1 = System_String__Format(DAT_09213fc0,uVar1,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Debug__LogError(uVar1,param_1,0);
          }
          if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06f33ed8(*plVar5,*(undefined4 *)(lVar2 + 0x18),lVar2,DAT_0919ec58);
        }
      }
    }
    FUN_071bd288(&local_80,DAT_091a3c08);
  }
  return;
}

