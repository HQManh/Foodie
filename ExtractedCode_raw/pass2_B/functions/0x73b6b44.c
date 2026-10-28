// rea decompile_all
// name: FUN_073b6b44
// address: 0x73b6b44
// body: available
// range: 0x73b6b44-0x73b7027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b6ccc to 0x73b7028 FUN_073b7028 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73b6cf4 to 0x73b72bc FUN_073b72bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73b6d10 to 0x73b7854 FUN_073b7854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_073b6b44(undefined1 *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_2 < 0x11) {
    uVar8 = (ulong)param_2;
    lVar10 = -0x651e95c4d06fbfb1;
    if (param_2 < 8) {
      if (param_2 < 4) {
        if (param_2 == 0) {
          return -0x651e95c4d06fbfb1;
        }
        uVar8 = ((ulong)param_2 | (ulong)(byte)param_1[param_2 - 1] << 2) * -0x3c5a37a36834ced9 ^
                (ulong)CONCAT11(param_1[param_2 >> 1],*param_1) * -0x651e95c4d06fbfb1;
      }
      else {
        lVar10 = (ulong)(param_2 << 1) + 0x9ae16a3b2f90404f;
        uVar9 = MessagePack_Internal_FarmHash__Fetch32(param_1,0,0);
        uVar7 = MessagePack_Internal_FarmHash__Fetch32(param_1 + (uVar8 - 4),0);
        uVar8 = ((uVar8 | (uVar9 & 0xffffffff) << 3) ^ uVar7 & 0xffffffff) * lVar10;
        uVar8 = (uVar7 & 0xffffffff ^ uVar8 >> 0x2f ^ uVar8) * lVar10;
      }
      lVar10 = (uVar8 ^ uVar8 >> 0x2f) * lVar10;
    }
    else {
      lVar10 = (ulong)(param_2 << 1) + 0x9ae16a3b2f90404f;
      lVar3 = MessagePack_Internal_FarmHash__Fetch64(param_1,0);
      lVar4 = MessagePack_Internal_FarmHash__Fetch64(param_1 + (uVar8 - 8),0);
      lVar5 = MessagePack_Internal_FarmHash__Rotate64(lVar4,0x25,0);
      lVar6 = MessagePack_Internal_FarmHash__Rotate64(lVar3 + -0x651e95c4d06fbfb1,0x19,0);
      uVar9 = (lVar6 + lVar4) * lVar10;
      uVar8 = (uVar9 ^ lVar3 + -0x651e95c4d06fbfb1 + lVar5 * lVar10) * lVar10;
      uVar8 = (uVar9 ^ uVar8 >> 0x2f ^ uVar8) * lVar10;
      lVar10 = (uVar8 ^ uVar8 >> 0x2f) * lVar10;
    }
    return lVar10;
  }
  if (param_2 < 0x21) {
    lVar10 = (ulong)(param_2 << 1) + 0x9ae16a3b2f90404f;
    lVar3 = MessagePack_Internal_FarmHash__Fetch64(param_1,0);
    lVar4 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 8,0);
    lVar5 = MessagePack_Internal_FarmHash__Fetch64(param_1 + ((ulong)param_2 - 8),0);
    lVar6 = MessagePack_Internal_FarmHash__Fetch64(param_1 + ((ulong)param_2 - 0x10),0);
    lVar1 = MessagePack_Internal_FarmHash__Rotate64(lVar4 + lVar3 * -0x4b6d499041670d8d,0x2b,0);
    lVar2 = MessagePack_Internal_FarmHash__Rotate64(lVar5 * lVar10,0x1e,0);
    lVar4 = MessagePack_Internal_FarmHash__Rotate64(lVar4 + -0x651e95c4d06fbfb1,0x12,0);
    uVar8 = lVar5 * lVar10 + lVar3 * -0x4b6d499041670d8d + lVar4;
    uVar9 = (uVar8 ^ lVar1 + lVar6 * -0x651e95c4d06fbfb1 + lVar2) * lVar10;
    uVar8 = (uVar8 ^ uVar9 >> 0x2f ^ uVar9) * lVar10;
    return (uVar8 ^ uVar8 >> 0x2f) * lVar10;
  }
  if (0x40 < param_2) {
    if (param_2 < 0x61) {
      lVar10 = FUN_073b7028(param_1,param_2,0);
      return lVar10;
    }
    if (0x100 < param_2) {
      lVar10 = FUN_073b7854(param_1,param_2,0);
      return lVar10;
    }
    lVar10 = FUN_073b72bc(param_1,param_2,0);
    return lVar10;
  }
  lVar10 = (ulong)(param_2 << 1) + 0x9ae16a3b2f904031;
  lVar3 = MessagePack_Internal_FarmHash__Fetch64(param_1,0,0);
  lVar4 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 8,0);
  lVar5 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x18,0);
  lVar6 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x10,0);
  lVar1 = MessagePack_Internal_FarmHash__Rotate64(lVar4 + lVar3 * -0x4b6d499041670d8d,0x2b,0);
  lVar2 = MessagePack_Internal_FarmHash__Rotate64(lVar5 * -0x651e95c4d06fbfcf,0x1e,0);
  lVar4 = MessagePack_Internal_FarmHash__Rotate64(lVar4 + -0x651e95c4d06fbfb1,0x12,0);
  uVar8 = lVar5 * -0x651e95c4d06fbfcf + lVar3 * -0x4b6d499041670d8d + lVar4;
  uVar9 = (uVar8 ^ lVar1 + lVar6 * -0x651e95c4d06fbfb1 + lVar2) * -0x651e95c4d06fbfcf;
  uVar9 = (uVar8 ^ uVar9 >> 0x2f ^ uVar9) * -0x651e95c4d06fbfcf;
  lVar3 = MessagePack_Internal_FarmHash__Fetch64(param_1 + ((ulong)param_2 - 0x20),0);
  lVar4 = MessagePack_Internal_FarmHash__Fetch64(param_1 + ((ulong)param_2 - 0x18),0);
  lVar5 = MessagePack_Internal_FarmHash__Fetch64(param_1 + ((ulong)param_2 - 8),0);
  lVar6 = MessagePack_Internal_FarmHash__Fetch64(param_1 + ((ulong)param_2 - 0x10),0);
  lVar1 = MessagePack_Internal_FarmHash__Rotate64(lVar4 + lVar3 * -0x4b6d499041670d8d,0x2b,0);
  lVar2 = MessagePack_Internal_FarmHash__Rotate64(lVar5 * lVar10,0x1e,0);
  lVar4 = MessagePack_Internal_FarmHash__Rotate64(lVar4 + -0x651e95c4d06fbfb1,0x12,0);
  uVar8 = lVar5 * lVar10 + lVar3 * -0x4b6d499041670d8d + lVar4;
  uVar7 = (uVar8 ^ lVar1 + lVar6 * -0x651e95c4d06fbfb1 + lVar2) * lVar10;
  uVar8 = (uVar8 ^ uVar7 >> 0x2f ^ uVar7) * lVar10;
  return ((uVar9 ^ uVar9 >> 0x2f) + (uVar8 ^ uVar8 >> 0x2f) * lVar10) * lVar10;
}

