// rea decompile_all
// name: TrungKienPack.Particle.ParticleElement.<IEPlay>d__5$$MoveNext
// address: 0x408fae8
// body: available
// range: 0x408fae8-0x408fc7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408fc78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool TrungKienPack_Particle_ParticleElement_<IEPlay>d__5__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09515d02 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091d5820);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_09515d02 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x40) == 0)) {
LAB_0408fc78:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_ParticleSystem__Play(*(long *)(lVar5 + 0x40),0);
    if (0.0 < *(float *)(param_1 + 0x28)) {
      lVar2 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_0408fc78;
      CakeOrder_AudioManagerCakeOrder__PlaySfxWithFixedPitch
                (*(undefined4 *)(param_1 + 0x28),0x3f800000,**(long **)(lVar2 + 0xb8),
                 *(undefined8 *)(lVar5 + 0x48),2,0,0);
    }
    uVar3 = thunk_FUN_03f9944c(DAT_09177ab8);
    FUN_053007d8(uVar3,lVar5,DAT_091d5820,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0918cec0);
    UnityEngine_WaitUntil___ctor(uVar4,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar5 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    }
  }
  return iVar1 == 0;
}

