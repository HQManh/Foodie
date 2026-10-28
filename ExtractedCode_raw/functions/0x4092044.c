// rea decompile_all
// name: TrungKienPack.Particle.VFXComboControl$$.cctor
// address: 0x4092044
// body: available
// range: 0x4092044-0x40922f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40922ec to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40922f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40922f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_VFXComboControl___cctor(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_09515d1c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918ca30);
    FUN_03f5c2a4(&DAT_09215b28);
    FUN_03f5c2a4(&DAT_092195d8);
    FUN_03f5c2a4(&DAT_092195a8);
    FUN_03f5c2a4(&DAT_092195b8);
    FUN_03f5c2a4(&DAT_092195b0);
    FUN_03f5c2a4(&DAT_092195e0);
    FUN_03f5c2a4(&DAT_092195e8);
    FUN_03f5c2a4(&DAT_092195d0);
    FUN_03f5c2a4(&DAT_092195a0);
    FUN_03f5c2a4(&DAT_092195c8);
    FUN_03f5c2a4(&DAT_092195c0);
    DAT_09515d1c = 1;
  }
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09215b28,0);
  uVar1 = DAT_091805f8;
  **(undefined4 **)(DAT_0918ca30 + 0xb8) = uVar2;
  lVar3 = FUN_03f5c394(uVar1,10);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = DAT_092195d0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20));
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = DAT_092195c0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28));
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = DAT_092195c8;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = DAT_092195e8;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38));
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = DAT_092195a0;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40));
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = DAT_092195d8;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x48));
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = DAT_092195a8;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x50));
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar3 + 0x58) = DAT_092195b0;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x58));
                    if (8 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x60) = DAT_092195b8;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x60));
                      if (9 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x68) = DAT_092195e0;
                        thunk_FUN_03f5d7b8();
                        plVar4 = (long *)(*(long *)(DAT_0918ca30 + 0xb8) + 8);
                        *plVar4 = lVar3;
                        thunk_FUN_03f5d7b8(plVar4,lVar3);
                        return;
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
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

