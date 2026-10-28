// rea decompile_all
// name: TrungKienPack.Particle.PoolingParticle$$Play
// address: 0x408ffdc
// body: available
// range: 0x408ffdc-0x4090283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4090280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long TrungKienPack_Particle_PoolingParticle__Play
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09515d04 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09186320);
    FUN_03f5c2a4(&DAT_091b77b0);
    FUN_03f5c2a4(&DAT_091b77b8);
    FUN_03f5c2a4(&DAT_091ee7f0);
    FUN_03f5c2a4(&DAT_091935c8);
    DAT_09515d04 = 1;
  }
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_091935c8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_4);
    lVar8 = *(long *)(param_5 + 8);
    if (((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) ||
       (lVar2 = TrungKienPack_Particle_PoolingParticle__PoolOf(param_4), lVar2 == 0)) {
      return 0;
    }
    lVar2 = TrungKienPack_Particle_PoolingParticle__SpawnFrom(lVar2,lVar2,param_5);
    plVar7 = (long *)(lVar1 + 0x18);
    *plVar7 = lVar2;
    thunk_FUN_03f5d7b8(plVar7,lVar2);
    if (*plVar7 != 0) {
      lVar2 = TrungKienPack_Particle_BaseParticleElement__get_TF();
      plVar9 = *(long **)(lVar8 + 0x20);
      if (plVar9 != (long *)0x0) {
        lVar8 = *plVar9;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09186320) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0409013c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186320,0);
LAB_0409013c:
        lVar8 = (*(code *)*puVar3)(plVar9,puVar3[1]);
        if ((lVar8 != 0) &&
           (fVar10 = (float)UnityEngine_Transform__get_localScale(lVar8,0), lVar2 != 0)) {
          fVar11 = *(float *)(param_5 + 0x3c);
          UnityEngine_Transform__set_localScale
                    (fVar10 * fVar11,param_2 * fVar11,param_3 * fVar11,lVar2,0);
          uStack_78 = *(undefined8 *)(param_5 + 0x80);
          uStack_80 = *(undefined8 *)(param_5 + 0x78);
          uStack_88 = *(undefined8 *)(param_5 + 0x70);
          local_90 = *(undefined8 *)(param_5 + 0x68);
          uStack_a8 = *(undefined8 *)(param_5 + 0x50);
          local_b0 = *(undefined8 *)(param_5 + 0x48);
          uStack_98 = *(undefined8 *)(param_5 + 0x60);
          uStack_a0 = *(undefined8 *)(param_5 + 0x58);
          plVar9 = (long *)*plVar7;
          if ((char)local_b0 == '\0') {
            if (plVar9 == (long *)0x0) goto LAB_04090280;
            (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
          }
          else {
            uStack_a8 = *(undefined8 *)(param_5 + 0x50);
            local_b0 = *(undefined8 *)(param_5 + 0x48);
            uStack_98 = *(undefined8 *)(param_5 + 0x60);
            uStack_a0 = *(undefined8 *)(param_5 + 0x58);
            uStack_88 = *(undefined8 *)(param_5 + 0x70);
            local_90 = *(undefined8 *)(param_5 + 0x68);
            uStack_78 = *(undefined8 *)(param_5 + 0x80);
            uStack_80 = *(undefined8 *)(param_5 + 0x78);
            FUN_05c3f628(&local_e8,&local_b0,DAT_091b77b8);
            if (plVar9 == (long *)0x0) goto LAB_04090280;
            uStack_68 = uStack_e0;
            local_70 = local_e8;
            uStack_58 = uStack_d0;
            local_60 = local_d8;
            uStack_48 = uStack_c0;
            uStack_50 = local_c8;
            local_40 = local_b8;
            (**(code **)(*plVar9 + 0x1d8))(plVar9,&local_70,*(undefined8 *)(*plVar9 + 0x1e0));
          }
          plVar9 = *(long **)(lVar1 + 0x18);
          uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar4,lVar1,DAT_091ee7f0,0);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x1b8))
                      (*(undefined4 *)(param_5 + 0x40),plVar9,uVar4,*(undefined8 *)(*plVar9 + 0x1c0)
                      );
            return *plVar7;
          }
        }
      }
    }
  }
LAB_04090280:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

