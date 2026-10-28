// rea decompile_all
// name: MessagePack.Internal.FarmHash$$Hash64
// address: 0x73b8fd0
// body: available
// range: 0x73b8fd0-0x73b931f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b92e0 to 0x73b7028 FUN_073b7028 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73b9304 to 0x73b72bc FUN_073b72bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73b931c to 0x73b7854 FUN_073b7854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_Internal_FarmHash__Hash64(uint *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar11 = (ulong)param_2;
  if (param_2 < 0x11) {
    lVar5 = -0x651e95c4d06fbfb1;
    if (param_2 < 8) {
      if (param_2 < 4) {
        if (param_2 != 0) {
          uVar11 = (uVar11 | (ulong)*(byte *)((long)param_1 + (ulong)(param_2 - 1)) << 2) *
                   -0x3c5a37a36834ced9 ^
                   (ulong)CONCAT11(*(undefined1 *)((ulong)(param_2 >> 1) + (long)param_1),
                                   (char)*param_1) * -0x651e95c4d06fbfb1;
          lVar5 = (uVar11 ^ uVar11 >> 0x2f) * -0x651e95c4d06fbfb1;
        }
      }
      else {
        uVar12 = (ulong)*(uint *)((long)param_1 + (uVar11 - 4));
        lVar5 = (ulong)(param_2 << 1) + 0x9ae16a3b2f90404f;
        uVar11 = ((uVar11 | (ulong)*param_1 << 3) ^ uVar12) * lVar5;
        uVar11 = (uVar12 ^ uVar11 >> 0x2f ^ uVar11) * lVar5;
        lVar5 = (uVar11 ^ uVar11 >> 0x2f) * lVar5;
      }
    }
    else {
      uVar12 = *(ulong *)((long)param_1 + (uVar11 - 8));
      lVar5 = (ulong)(param_2 << 1) + 0x9ae16a3b2f90404f;
      uVar11 = *(long *)param_1 + 0x9ae16a3b2f90404f;
      if ((DAT_09520c20 & 1) == 0) {
        FUN_03f5c2a4(&DAT_091cc160);
        DAT_09520c20 = 1;
      }
      uVar7 = ((uVar11 >> 0x19 | uVar11 << 0x27) + uVar12) * lVar5;
      uVar11 = (uVar7 ^ uVar11 + (uVar12 >> 0x25 | uVar12 << 0x1b) * lVar5) * lVar5;
      uVar11 = (uVar7 ^ uVar11 >> 0x2f ^ uVar11) * lVar5;
      lVar5 = (uVar11 ^ uVar11 >> 0x2f) * lVar5;
    }
  }
  else if (param_2 < 0x21) {
    lVar6 = *(long *)param_1;
    lVar4 = *(long *)(param_1 + 2);
    lVar3 = *(long *)((long)param_1 + (uVar11 - 0x10));
    lVar8 = *(long *)((long)param_1 + (uVar11 - 8));
    if ((DAT_09520c20 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091cc160);
      DAT_09520c20 = 1;
    }
    lVar5 = (ulong)(param_2 << 1) + 0x9ae16a3b2f90404f;
    uVar11 = lVar4 + 0x9ae16a3b2f90404f;
    uVar7 = lVar8 * lVar5;
    uVar12 = lVar4 + lVar6 * -0x4b6d499041670d8d;
    uVar11 = (uVar11 >> 0x12 | uVar11 << 0x2e) + lVar6 * -0x4b6d499041670d8d + uVar7;
    uVar12 = ((uVar7 >> 0x1e | uVar7 << 0x22) + (uVar12 >> 0x2b | uVar12 * 0x200000) +
              lVar3 * -0x651e95c4d06fbfb1 ^ uVar11) * lVar5;
    uVar11 = (uVar11 ^ uVar12 >> 0x2f ^ uVar12) * lVar5;
    lVar5 = (uVar11 ^ uVar11 >> 0x2f) * lVar5;
  }
  else {
    if (0x40 < param_2) {
      if (param_2 < 0x61) {
        lVar6 = FUN_073b7028(param_1,uVar11,0);
        return lVar6;
      }
      if (param_2 < 0x101) {
        lVar6 = FUN_073b72bc(param_1,param_2,0);
        return lVar6;
      }
      lVar6 = FUN_073b7854(param_1,param_2,0);
      return lVar6;
    }
    lVar6 = *(long *)param_1;
    lVar4 = *(long *)(param_1 + 2);
    lVar3 = *(long *)(param_1 + 4);
    lVar8 = *(long *)(param_1 + 6);
    if ((DAT_09520c20 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091cc160);
      DAT_09520c20 = 1;
    }
    uVar12 = lVar4 + 0x9ae16a3b2f90404f;
    lVar5 = (ulong)(param_2 << 1) + 0x9ae16a3b2f904031;
    uVar9 = *(long *)((long)param_1 + (uVar11 - 8)) * lVar5;
    uVar10 = lVar8 * -0x651e95c4d06fbfcf;
    uVar7 = lVar4 + lVar6 * -0x4b6d499041670d8d;
    lVar8 = *(long *)((long)param_1 + (uVar11 - 0x20)) * -0x4b6d499041670d8d;
    lVar4 = *(long *)((long)param_1 + (uVar11 - 0x18));
    uVar1 = lVar8 + lVar4;
    uVar2 = lVar4 + 0x9ae16a3b2f90404f;
    uVar2 = lVar8 + uVar9 + (uVar2 >> 0x12 | uVar2 << 0x2e);
    uVar12 = (uVar12 >> 0x12 | uVar12 << 0x2e) + lVar6 * -0x4b6d499041670d8d + uVar10;
    uVar11 = ((uVar9 >> 0x1e | uVar9 << 0x22) +
              *(long *)((long)param_1 + (uVar11 - 0x10)) * -0x651e95c4d06fbfb1 +
              (uVar1 >> 0x2b | uVar1 * 0x200000) ^ uVar2) * lVar5;
    uVar7 = ((uVar10 >> 0x1e | uVar10 << 0x22) + (uVar7 >> 0x2b | uVar7 * 0x200000) +
             lVar3 * -0x651e95c4d06fbfb1 ^ uVar12) * -0x651e95c4d06fbfcf;
    uVar11 = (uVar2 ^ uVar11 >> 0x2f ^ uVar11) * lVar5;
    uVar12 = (uVar12 ^ uVar7 >> 0x2f ^ uVar7) * -0x651e95c4d06fbfcf;
    lVar5 = ((uVar12 ^ uVar12 >> 0x2f) + (uVar11 ^ uVar11 >> 0x2f) * lVar5) * lVar5;
  }
  return lVar5;
}

